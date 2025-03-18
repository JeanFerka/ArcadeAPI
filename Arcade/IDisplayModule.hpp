/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** IDisplayModule.hpp
*/

#ifndef ARCADE_IDISPLAYMODULE_HPP
    #define ARCADE_IDISPLAYMODULE_HPP

    #include "Color.hpp"
    #include "Vector.hpp"

namespace Arcade {
    class IDisplayModule;
}

typedef Arcade::IDisplayModule ArcadeIDisplayModule

namespace Arcade {
    class IDisplayModule {
        public:
            virtual ~IDisplayModule() = default;

            virtual void drawPixel(Color color, Vector2<float> pos) = 0;
            virtual void drawLine(Color color, Vector2<float> beg, Vector2<float> end) = 0;
            virtual void drawRectangle(Vector2<float> size, Vector2<float> pos, Color color) = 0;
            virtual void drawCircle(float radius, Color color) = 0;
            virtual void drawText(const std::string& text, Vector2<float> pos, Color color) = 0;
    }
}

#endif /* ARCADE_IDISPLAYMODULE_HPP */
