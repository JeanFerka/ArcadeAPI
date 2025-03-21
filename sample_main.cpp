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
#include <dlfcn.h>

int main(int argc, char **argv)
{
    void *displayHandle = dlopen(argv[1]);
    Aracde::IDisplayModule *(*getDisplay)() = dlsym(displayHandle, "getInstance");

    void *gameHandle = dlopen(argv[2]);
    Aracde::IGameModule *(*getGame)() = dlsym(gameHandle, "getInstance");

    Arcade::IDisplayModule *display = getDisplay();
    Arcade::IGameModule *game = getGame();

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
    dlclose(displayHandle);
    dlclose(gameHandle);
    return 0;
}
