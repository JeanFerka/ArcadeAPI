# Arcade’s documentation


## How to implement game libraries:

The game logic must be separate from rendering.
Game logic must be handled by game libraries and rendering by graphic libraries.

Your game libraries must implement the following interface:

```cpp
namespace Arcade {
    class IGameModule {
        public:
            virtual ~IGameModule() = default;

            virtual void update(std::vector<Event> events) = 0;

            virtual std::vector<IDrawable> getDrawables() = 0;
    }
}
```

They must also implement the following symbol, that returns an instance of the class implementing the interface.

```cpp
// Symbol that your game libraries must define

extern "C" {
    ArcadeIGameModule *getInstance();
}
```

The related types and structures are available in the header files contained in the Arcade folder.


## How to implement graphics libraries:

The graphics libraries must provide practical symbols to display any kind of object.
They must also provide a function that returns the system events.

Your graphics libraries must implement the following interface:

```cpp
namespace Arcade {
    class IDisplayModule {
        public:
            virtual ~IDisplayModule() = default;

            virtual void drawPixel(Color color, Vector2<float> pos) = 0;
            virtual void drawLine(Color color, Vector2<float> beg, Vector2<float> end) = 0;
            virtual void drawRectangle(Vector2<float> size, Vector2<float> pos, Color color) = 0;
            virtual void drawCircle(float radius, Color color) = 0;
            virtual void drawText(const std::string &text, Vector2<float> pos, Color color) = 0;

            virtual std::vector<Event> getEvents() = 0;
    }
}
```

They must also implement the following symbol, that returns an instance of the class implementing the interface.

```cpp
// Symbol that your graphics libraries must define

extern "C" {
    ArcadeIDisplayModule *getInstance();
}
```

The related types and structures are available in the header files contained in the Arcade folder.

## Sample main function

```cpp
#include "Arcade/IDisplayModule.hpp"
#include "Arcade/IGameModule.hpp"
#include "Arcade/IDrawable.hpp"
#include "Arcade/Event.hpp"
#include "Arcade/Rect.hpp"
#include <dlfcn.h>

int main(int argc, char **argv)
{
    void *displayHandle = dlopen(argv[1]);
    Aracde::IDisplayModule *(*getDisplay)() = dlsym(displayHandle, "getInstance");

    void *gameHandle = dlopen(argv[2]);
    Aracde::IGameModule *(*getGame)() = dlsym(gameHandle, "getInstance");

    Arcade::IDisplayModule *display = getDisplay();
    Arcade::IGameModule *game = getGame();

    std::vector<Arcade::Event> events;
    std::vector<std::unique_ptr<Arcade::IDrawable>> drawables;
    Arcade::Rect<float> view;

    while (true) {
        events = display->getEvents();
        for (Arcade::Event &event : events) {
            if (event.type == Arcade::Event::Closed) {
                return 0;
            }
        }
        game->update(events);
        view = game->getView();
        display->setView(view);
        drawables = game->getDrawables();
        display->clear();
        for (std::unique_ptr<Arcade::IDrawable> &drawable : drawables) {
            drawable->draw(*display);
        }
        display->display();
    }
    dlclose(displayHandle);
    dlclose(gameHandle);
    return 0;
}
```
