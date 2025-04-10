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
            Rect() = default;
            Rect(T X, T Y, T Width, T Height)
            {
                this->x = X;
                this->y = Y;
                this->width = Width;
                this->height = Height;
            };
            template <typename U>
            Rect(const Rect<U> &rectangle)
            {
                this->x = rectangle.x;
                this->y = rectangle.y;
                this->width = rectangle.width;
                this->height = rectangle.height;
            }
            ~Rect() = default;
        public:
            bool contains(const Vector2<T> &point) const
            {
                return this->x < point.x && point.x < this->x + this->width
                    && this->y < point.y && point.y < this->y + this->height;
            }
            bool intersects(const Rect<T> &rectangle) const
            {
                return !(this->x + this->width <= rectangle.x
                    || this->y + this->height <= rectangle.y
                    || rectangle.x + rectangle.width <= this->x
                    || rectangle.y + rectangle.height <= this->y);
            }
        public:
            T x;
            T y;
            T width;
            T height;
    };

    template <typename T>
    class Rect3d {
        public:
            Rect3d() = default;
            Rect3d(T X, T Y, T Z, T Width, T Height, T Depth)
            {
                this->x = X;
                this->y = Y;
                this->z = Z;
                this->width = Width;
                this->height = Height;
                this->depth = Depth;
            };
            template <typename U>
            Rect3d(const Rect3d<U> &rectangle)
            {
                this->x = rectangle.x;
                this->y = rectangle.y;
                this->z = rectangle.z;
                this->width = rectangle.width;
                this->height = rectangle.height;
                this->Depth = rectangle.depth;
            }
            ~Rect3d() = default;
        public:
            bool contains(const Vector3<T> &point) const
            {
                return this->x < point.x && point.x < this->x + this->width
                    && this->y < point.y && point.y < this->y + this->depth
                    && this->z < point.z && point.z < this->z + this->height;

            }
            bool intersects(const Rect3d<T> &rectangle) const
            {
                return !(this->x + this->width <= rectangle.x
                    || this->y + this->depth <= rectangle.y
                    || this->z + this->height <= rectangle.z
                    || rectangle.x + rectangle.width <= this->x
                    || rectangle.y + rectangle.depth <= this->y
                    || rectangle.z + rectangle.height <= this->z);
            }
        public:
            T x;
            T y;
            T z;
            T width;
            T height;
            T depth;
    };
}
#endif /* ARCADE_RECT_HPP */
