/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** IDrawable.hpp
*/

#ifndef ARCADE_IDRAWABLE_HPP
    #define ARCADE_IDRAWABLE_HPP

    #include "IDisplayModule.hpp"

namespace Arcade {
    class IDrawable {
        public:
            virtual ~IDrawable() = default;

            virtual void draw(IDisplayModule &display) const = 0;
    };
}

#endif /* ARCADE_IDRAWABLE_HPP */
