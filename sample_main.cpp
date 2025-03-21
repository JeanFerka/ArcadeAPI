/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** sample_main.cpp
*/

#include "Arcade/IDisplayModule.hpp"
#include "Arcade/IGameModule.hpp"
#include "Arcade/IDrawable.hpp"
#include "Arcade/Event.hpp"
#include "Aracde/Rect.hpp"

int main(int argc, char **argv)
{
    DLLoader<Arcade::IDisplayModule> displayLoader(argv[1]);
    DLLoader<Arcade::IGameModule> gameLoader(argv[2]);
    Arcade::IDisplayModule *display = displayLoader.getInstance();
    Arcade::IGameModule *game = gameLoader.getInstance();
    std::vector<Arcade::Event> events;
    std::vector<std::unique_ptr<Arcade::IDrawable>> drawables;
    Arcade::Rect<float> view;

    while (true) {
        events = display->getEvents();
        for (Arcade::Event &event : events) {
            if (event.type == Arcade::Event::Closed) {
                return 0;
            }
        }
        game->update(events);
        view = game->getView();
        display->setView(view);
        drawables = game->getDrawables();
        display->clear();
        for (std::unique_ptr<Arcade::IDrawable> &drawable : drawables) {
            drawable->draw(*display);
        }
        display->display();
    }
    return 0;
}
