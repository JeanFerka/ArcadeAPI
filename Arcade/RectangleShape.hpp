/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** RectangleShape.hpp
*/

#ifndef ARCADE_RECTANGLE_SHAPE_HPP
    #define ARCADE_RECTANGLE_SHAPE_HPP

    #include "Transformable.hpp"
    #include "Vector.hpp"
    #include "Rect.hpp"
    #include "Color.hpp"

namespace Arcade {
    class RectangleShape : public Transformable {
        public:
            RectangleShape(
                const Vector2<float> &size = {1.0f, 1.0f},
                const Vector2<float> &position = {0.0f, 0.0f},
                const Color &color = White,
                const Color &outlineColor = Black
            );
            ~RectangleShape() = default;
        public:
            void setColor(const Color &color);
            void setOutlineColor(const Color &color);
        public:
            const Color &getColor() const;
            const Color &getOutlineColor() const;
        private:
            Color _color;
            Color _outlineColor;
    };
}

#endif /* ARCADE_RECTANGLE_SHAPE_HPP */
