/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** IGameModule.hpp
*/

#ifndef ARCADE_IGAMEMODULE_HPP
    #define ARCADE_IGAMEMODULE_HPP

    #include <vector>
    #include <memory>
    #include "IDisplayModule.hpp"
    #include "IDrawable.hpp"
    #include "Rect.hpp"

namespace Arcade {
    class IGameModule;
}

typedef Arcade::IGameModule ArcadeIGameModule;

namespace Arcade {
    class IGameModule {
        public:
            struct Event {
                ////////////////////////////////////////////////////////////
                /// \brief Game change event parameters (Changed)
                ///
                ////////////////////////////////////////////////////////////
                struct ChangeEvent {
                    char *name; //!< Name of the new game
                };

                ////////////////////////////////////////////////////////////
                /// \brief Game score event parameters (Scored)
                ///
                ////////////////////////////////////////////////////////////
                struct ScoreEvent {
                    int value;  //!< Name of the new game
                };

                enum EventType {
                    Closed,         //!< The game requested to be closed, therefore you should go back to menu (no data)
                    Changed,        //!< The game requested to be changed to another game (data in event.gameChange)
                    Scored,          //!< The game recorded a score (data in event.score)
                };

                ////////////////////////////////////////////////////////////
                // Member data
                ////////////////////////////////////////////////////////////
                EventType type; //!< Type of the event

                union {
                    ChangeEvent change; //!< Change event parameters (Event::Changed)
                    ScoreEvent score;
                };

            };

        public:
            virtual ~IGameModule() = default;

            virtual void update(std::vector<IDisplayModule::Event> events) = 0;
            virtual std::vector<Event> getEvents() = 0;
            virtual std::vector<std::unique_ptr<IDrawable>> getDrawables() = 0;
            virtual Rect<float> getView() = 0;
    };
}

#endif /* ARCADE_IGAMEMODULE_HPP */
