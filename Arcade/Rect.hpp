/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Rect.hpp
*/

#ifndef ARCADE_RECT_HPP
    #define ARCADE_RECT_HPP

    #include "Vector.hpp"

namespace Arcade {
    template <typename T>
    class Rect {
        public:
            T x;
            T y;
            T width;
            T height;

            bool contains(const Vector2<T> &point) const
            {
                return this->x < point.x && point.x < this->x + this->width
                    && this->y < point.y && point.y < this->y + this->height;
            }

            bool intersects(const Rect<T> &rectangle) const
            {
                return this->contains(Vector2<T>{rectangle.x, rectangle.y})
                    || this->contains(Vector2<T>{rectangle.x + rectangle.width, rectangle.y})
                    || this->contains(Vector2<T>{rectangle.x, rectangle.y + rectangle.height})
                    || this->contains(Vector2<T>{rectangle.x + rectangle.width, rectangle.y + rectangle.height});
            }
    };
}

#endif /* ARCADE_RECT_HPP */
