/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Object.hpp
*/

#ifndef ARCADE_OBJECT_HPP
    #define ARCADE_OBJECT_HPP

    #include "Color.hpp"

namespace Arcade {
    struct Object;
}

typedef Arcade::Object ArcadeObject;

namespace Arcade {
    struct Object {
        enum Type {
            TEXT,
            OBJ
        };

        Type type;
        int id;
        char *text;
        char *texture;
        char ascii;
        Color color;
        float x;
        float y;
        float length;
        float height;
    };
}

#endif /* ARCADE_OBJECT_HPP */
