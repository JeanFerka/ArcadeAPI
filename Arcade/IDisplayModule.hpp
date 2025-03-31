/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** IDisplayModule.hpp
*/

#ifndef ARCADE_IDISPLAY_MODULE_HPP
    #define ARCADE_IDISPLAY_MODULE_HPP

    #include <string>
    #include <vector>
    #include <cstdint>
    #include "Color.hpp"
    #include "Vector.hpp"
    #include "Rect.hpp"
    #include "Keyboard.hpp"
    #include "Mouse.hpp"
    #include "Text.hpp"
    #include "RectangleShape.hpp"
    #include "CircleShape.hpp"
    #include "Sprite.hpp"
    #include "Model.hpp"

namespace Arcade {
    class IDisplayModule;
}

typedef Arcade::IDisplayModule ArcadeIDisplayModule;

namespace Arcade {
    class IDisplayModule {
        public:
            ////////////////////////////////////////////////////////////
            /// \brief Defines a system event and its parameters
            ///
            ////////////////////////////////////////////////////////////
            struct Event {
                public:
                    ////////////////////////////////////////////////////////////
                    /// \brief Size events parameters (Resized)
                    ///
                    ////////////////////////////////////////////////////////////
                    struct SizeEvent {
                        unsigned int width;  //!< New width, in pixels
                        unsigned int height; //!< New height, in pixels
                    };

                    ////////////////////////////////////////////////////////////
                    /// \brief Keyboard event parameters (KeyPressed, KeyReleased)
                    ///
                    ////////////////////////////////////////////////////////////
                    struct KeyEvent {
                        Keyboard::Key code;          //!< Code of the key that has been pressed
                        bool          alt;           //!< Is the Alt key pressed?
                        bool          control;       //!< Is the Control key pressed?
                        bool          shift;         //!< Is the Shift key pressed?
                        bool          system;        //!< Is the System key pressed?
                    };

                    ////////////////////////////////////////////////////////////
                    /// \brief Text event parameters (TextEntered)
                    ///
                    ////////////////////////////////////////////////////////////
                    struct TextEvent {
                        char character; //!< Value of the character
                    };

                    ////////////////////////////////////////////////////////////
                    /// \brief Mouse move event parameters (MouseMoved)
                    ///
                    ////////////////////////////////////////////////////////////
                    struct MouseMoveEvent {
                        int x; //!< X position of the mouse pointer, relative to the left of the owner window
                        int y; //!< Y position of the mouse pointer, relative to the top of the owner window
                    };

                    ////////////////////////////////////////////////////////////
                    /// \brief Mouse buttons events parameters
                    ///        (MouseButtonPressed, MouseButtonReleased)
                    ///
                    ////////////////////////////////////////////////////////////
                    struct MouseButtonEvent {
                        Mouse::Button button; //!< Code of the button that has been pressed
                        int           x;      //!< X position of the mouse pointer, relative to the left of the owner window
                        int           y;      //!< Y position of the mouse pointer, relative to the top of the owner window
                    };

                    ////////////////////////////////////////////////////////////
                    /// \brief Mouse wheel events parameters (MouseWheelScrolled)
                    ///
                    ////////////////////////////////////////////////////////////
                    struct MouseWheelScrollEvent {
                        Mouse::Wheel wheel; //!< Which wheel (for mice with multiple ones)
                        float        delta; //!< Wheel offset (positive is up/left, negative is down/right). High-precision mice may use non-integral offsets.
                        int          x;     //!< X position of the mouse pointer, relative to the left of the owner window
                        int          y;     //!< Y position of the mouse pointer, relative to the top of the owner window
                    };

                    ////////////////////////////////////////////////////////////
                    /// \brief Enumeration of the different types of events
                    ///
                    ////////////////////////////////////////////////////////////
                    enum EventType {
                        Closed,                 //!< The window requested to be closed (no data)
                        Resized,                //!< The window was resized (data in event.size)
                        LostFocus,              //!< The window lost the focus (no data)
                        GainedFocus,            //!< The window gained the focus (no data)
                        TextEntered,            //!< A character was entered (data in event.text)
                        KeyPressed,             //!< A key was pressed (data in event.key)
                        KeyReleased,            //!< A key was released (data in event.key)
                        MouseWheelScrolled,     //!< The mouse wheel was scrolled (data in event.mouseWheelScroll)
                        MouseButtonPressed,     //!< A mouse button was pressed (data in event.mouseButton)
                        MouseButtonReleased,    //!< A mouse button was released (data in event.mouseButton)
                        MouseMoved,             //!< The mouse cursor moved (data in event.mouseMove)
                        MouseEntered,           //!< The mouse cursor entered the area of the window (no data)
                        MouseLeft,              //!< The mouse cursor left the area of the window (no data)

                        Count                   //!< Keep last -- the total number of event types
                    };

                    ////////////////////////////////////////////////////////////
                    // Member data
                    ////////////////////////////////////////////////////////////
                    EventType type; //!< Type of the event

                    union {
                        SizeEvent             size;              //!< Size event parameters (Event::Resized)
                        KeyEvent              key;               //!< Key event parameters (Event::KeyPressed, Event::KeyReleased)
                        TextEvent             text;              //!< Text event parameters (Event::TextEntered)
                        MouseMoveEvent        mouseMove;         //!< Mouse move event parameters (Event::MouseMoved)
                        MouseButtonEvent      mouseButton;       //!< Mouse button event parameters (Event::MouseButtonPressed, Event::MouseButtonReleased)
                        MouseWheelScrollEvent mouseWheelScroll;  //!< Mouse wheel event parameters (Event::MouseWheelScrolled)
                    };
            };

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

            // GRAPHICS 2D
            virtual void drawPixel(Color color, Vector2<float> pos) = 0;
            virtual void drawLine(Color color, Vector2<float> beg, Vector2<float> end) = 0;
            virtual void drawRectangle(const RectangleShape &rectangle) = 0;
            virtual void drawCircle(const CircleShape &circle) = 0;
            virtual void drawSprite(const Sprite &sprite) = 0;

            // GRAPHICS 3D
            virtual void drawModel(const Model &model) = 0;

            virtual std::vector<Event> getEvents() = 0;
            virtual void setView(Rect<float> rect) = 0;
            virtual void clear() = 0;
            virtual void display() = 0;
    };
}

#endif /* ARCADE_IDISPLAY_MODULE_HPP */
