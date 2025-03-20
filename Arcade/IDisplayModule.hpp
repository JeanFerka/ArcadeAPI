/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** IDisplayModule.hpp
*/

#ifndef ARCADE_IDISPLAYMODULE_HPP
    #define ARCADE_IDISPLAYMODULE_HPP

    #include <string>
    #include <vector>
    #include "Color.hpp"
    #include "Vector.hpp"
    #include "Event.hpp"

namespace Arcade {
    class IDisplayModule;
}

typedef Arcade::IDisplayModule ArcadeIDisplayModule;

namespace Arcade {
    class IDisplayModule {
        public:
            virtual ~IDisplayModule() = default;

            virtual void drawPixel(Color color, Vector2<float> pos) = 0;
            virtual void drawLine(Color color, Vector2<float> beg, Vector2<float> end) = 0;
            virtual void drawRectangle(Vector2<float> size, Vector2<float> pos, Color color) = 0;
            virtual void drawCircle(float radius, Vector2<float> pos, Color color) = 0;
            virtual void drawText(const std::string &text, Vector2<float> pos, Color color) = 0;

            virtual std::vector<Event> getEvents() = 0;
            virtual void setView(Rect rect) = 0;
            virtual void clear() = 0;
            virtual void display() = 0;
    };
}

#endif /* ARCADE_IDISPLAYMODULE_HPP */
