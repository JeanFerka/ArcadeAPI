/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** CircleShape.hpp
*/

#ifndef ARCADE_CIRCLESHAPE_HPP
    #define ARCADE_CIRCLESHAPE_HPP

    #include "Transformable.hpp"
    #include "Vector.hpp"
    #include "Rect.hpp"
    #include "Color.hpp"

namespace Arcade {
    class CircleShape : public Transformable {
        public:
            CircleShape(
                float radius = 25.0f,
                const Vector2<float> &position = {0.0f, 0.0f},
                const Color &color = White,
                const Color &outlineColor = Black
            );
            ~CircleShape() = default;
        public:
            void setRadius(float radius);
            void setColor(const Color &color);
            void setOutlineColor(const Color &color);
        public:
            float getRadius() const;
            const Color &getColor() const;
            const Color &getOutlineColor() const;
        private:
            float _radius;
            Color _color;
            Color _outlineColor;
    };
}

#endif /* ARCADE_CIRCLESHAPE_HPP */
