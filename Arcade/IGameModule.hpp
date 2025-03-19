/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** IGameModule.hpp
*/

#ifndef ARCADE_IGAMEMODULE_HPP
    #define ARCADE_IGAMEMODULE_HPP

    #include "IDrawable.hpp"
    #include "Event.hpp"

namespace Arcade {
    class IGameModule;
}

typedef Arcade::IGameModule ArcadeIGameModule;

namespace Arcade {
    class IGameModule {
        public:
            virtual ~IGameModule() = default;

            virtual void update(std::vector<Event> events) = 0;

            virtual std::vector<IDrawable> getDrawables() = 0;
    };
}

#endif /* ARCADE_IGAMEMODULE_HPP */
