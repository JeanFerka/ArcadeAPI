/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Color.hpp
*/

#ifndef ARCADE_COLOR_HPP
    #define ARCADE_COLOR_HPP

namespace Arcade {
    struct Color {
        unsigned char r;
        unsigned char g;
        unsigned char b;
        unsigned char a;
    };

    const Color Black   = {0, 0, 0, 255};
    const Color Red     = {255, 0, 0, 255};
    const Color Green   = {0, 255, 0, 255};
    const Color Blue    = {0, 0, 255, 255};
    const Color Yellow  = {255, 255, 0, 255};
    const Color Cyan    = {0, 255, 255, 255};
    const Color Magenta = {255, 0, 255, 255};
    const Color White   = {255, 255, 255, 255};
}

#endif /* ARCADE_COLOR_HPP */
