# Arcade’s documentation


## How to implement game libraries:

The game logic must be separate from rendering.
Game logic must be handled by game libraries and rendering by graphic libraries.

Your game libraries must implement the following interface:

```cpp
namespace Arcade {
    class IDrawable {
        public:
            virtual ~IDrawable() = default;
            virtual void draw(IDisplayModule &display) const = 0;
    };
}

namespace Arcade {
    class IGameModule : public IDrawable {
        public:
            virtual ~IGameModule() = default;

            virtual std::vector<Event> getEvents() = 0;
            virtual void update(std::vector<IDisplayModule::Event> events) = 0;
    };
}
```

`IGameModule::getEvents` returns the game events that occured.
`IGameModule::update` updates the state of the game.
`IGameModule::draw` draws the game on the display given as parameter.

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
            enum Type {
                TEXT,
                GRAPHICS_2D,
                GRAPHICS_3D,
            };

        public:
            virtual ~IDisplayModule() = default;

            // TEXT
            virtual void drawText(const Text &text) = 0;

            // GRAPHICS_2D
            virtual void drawPixel(Color color, Vector2<float> pos) = 0;
            virtual void drawLine(Color color, Vector2<float> beg, Vector2<float> end) = 0;
            virtual void drawRectangle(const RectangleShape &rectangle) = 0;
            virtual void drawCircle(const CircleShape &circle) = 0;
            virtual void drawSprite(const Sprite &sprite) = 0;

            // GRAPHICS_3D
            virtual void drawModel(const Model &model) = 0;

            virtual Type getType() const = 0;
            virtual std::vector<Event> getEvents() = 0;
            virtual void setView(Rect<float> rect) = 0;
            virtual void clear() = 0;
            virtual void display() = 0;
    };
}
```

`IDisplayModule::getType` returns the type of display, either TEXT, GRAPHICS_2D or GRAPHICS_3D.
`IDisplayModule::getEvents` returns the display/system events that occured.
`IDisplayModule::setView` sets the part of the game world that the display should show.
`IDisplayModule::clear` clears the display.
`IDisplayModule::display` displays the display.
The draw* functions are used to draw things on the display.

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
#include "Arcade/Event.hpp"
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

    while (true) {
        events = display->getEvents();
        for (Arcade::Event &event : events) {
            if (event.type == Arcade::Event::Closed) {
                return 0;
            }
        }
        game->update(events);
        display->clear();
        game->draw(*display);
        display->display();
    }
    dlclose(displayHandle);
    dlclose(gameHandle);
    return 0;
}
```
