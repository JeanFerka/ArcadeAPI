# Arcade’s documentation


## How to implement game libraries:

The game logic must be separate from rendering.
Game logic must be handled by game libraries and rendering by graphic libraries.

All game libraries must implement the following symbols:

    
```cpp
// Symbols that your game library must define

extern "C" {
    // Updates the state of the game using the events provided by the core
    void updateGame(ArcadeEvent *events);

    // Returns all the objects of the game and their attributes,
    // so that the core can render them.
    ArcadeObject *getGameState();
}
```

The related types and structures are available in the header file ArcadeAPI.hpp.


## How to implement graphics libraries:

The graphics libraries must provide practical symbols to display any kind of object.
They must also provide a function that returns the system events.

All graphics libraries must implement the following symbols:

```cpp
// Symbols that your game library must define

extern "C" {
    void drawSquare(ArcadeColor *color, float x, float y, float size);
    void drawCircle(ArcadeColor *color, float x, float y, float size);
    void drawSprite(ArcadeSprite *sprite, float x, float y, float size);
    void drawText(char *text, float x, float y);
    void getEvents(ArcadeEvent *events);
}
```

The related types and structures are available in the header file ArcadeAPI.hpp.
