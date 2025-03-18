/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Mouse.hpp
*/

#ifndef ARCADE_MOUSE_HPP
    #define ARCADE_MOUSE_HPP

namespace Arcade {
    class Mouse {
        public:
            enum Button {
                Left,       // Left mouse button
                Right,      // Right mouse button
                Middle,     // Middle (wheel) mouse button
                XButton1,   // Additional button 1
                XButton2,   // Additional button 2

                ButtonCount // Total number of buttons
            };

            enum Wheel {
                VerticalWheel,   // Vertical scrolling wheel
                HorizontalWheel  // Horizontal scrolling wheel
            };
    };
} // namespace Arcade

#endif /* ARCADE_MOUSE_HPP */
