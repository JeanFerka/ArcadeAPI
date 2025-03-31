/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Vector.hpp
*/

#ifndef ARCADE_VECTOR_HPP
    #define ARCADE_VECTOR_HPP

namespace Arcade {
    template <typename T>
    class Vector2 {
        public:
            Vector2() = default;
            Vector2(T X, T Y)
            {
                this->x = X;
                this->y = Y;
            };
            template <typename U>
            Vector2(const Vector2<U> &vector)
            {
                this->x = static_cast<T>(vector.x);
                this->y = static_cast<T>(vector.y);
            }
            ~Vector2() = default;
        public:
            T x;
            T y;
    };

    template <typename T>
    Vector2<T> &operator+=(Vector2<T> &lhs, const Vector2<T> &rhs)
    {
        lhs.x += rhs.x;
        lhs.y += rhs.y;
        return lhs;
    };

    template <typename T>
    bool operator==(const Vector2<T> &lhs, const Vector2<T> &rhs)
    {
        return lhs.x == rhs.x && lhs.y == rhs.y;
    };

    template <typename T>
    class Vector3 {
        public:
            Vector3() = default;
            Vector3(T X, T Y, T Z)
            {
                this->x = X;
                this->y = Y;
                this->z = Z;
            };
            template <typename U>
            Vector3(const Vector3<U> &vector)
            {
                this->x = static_cast<T>(vector.x);
                this->y = static_cast<T>(vector.y);
                this->z = static_cast<T>(vector.z);
            }
            ~Vector3() = default;
        public:
            T x;
            T y;
            T z;
    };

    template <typename T>
    Vector3<T> &operator+=(Vector3<T> &lhs, const Vector3<T> &rhs)
    {
        lhs.x += rhs.x;
        lhs.y += rhs.y;
        lhs.z += rhs.z;
        return lhs;
    };

    template <typename T>
    bool operator==(const Vector3<T> &lhs, const Vector3<T> &rhs)
    {
        return lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z;
    };
}

#endif /* ARCADE_VECTOR_HPP */
