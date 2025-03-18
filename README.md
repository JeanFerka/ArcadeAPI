# Arcade’s documentation

The game logic must be separate from rendering.
Game logic must be handled by game libraries and rendering by graphic libraries.

## How to implement game libraries:
All game libraries must implement the following symbols:

    // Symbols that your game library must define
    
    extern "C" {
        // Updates the state of the game using the events provided by the core
        void updateGame(void *events);
    
        // Returns all the objects of the game and their attributes,
        // so that the core can render them.
        GameObject *getGameState();
    }

The related types and structures are available in the header file ArcadeAPI.hpp.


The graphics libraries must provide practical symbols to display any kind of object.
They must also provide a function that returns the system events that occured.

## How to implement graphics libraries:
All graphics libraries must implement the following symbols:

    // Symbols that your game library must define
    
    extern "C" {
        void drawSquare(uint32_t color, float x, float y);
        void drawCircle(uint32_t color, float x, float y);
        void drawSprite(float x, float y);
        void drawText(char *text, float x, float y);
        void getEvents(ArcadeEvent *events);
    }

The related types and structures are available in the header file ArcadeAPI.hpp.
