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
    struct Vector2 {
        T x;
        T y;
    };

    template <typename T>
    struct Vector3 {
        T x;
        T y;
        T z;
    };
}

#endif /* ARCADE_VECTOR_HPP */
