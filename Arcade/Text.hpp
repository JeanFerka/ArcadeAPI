/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Text.hpp
*/

#ifndef ARCADE_TEXT_HPP
    #define ARCADE_TEXT_HPP

    #include "Transformable.hpp"
    #include "Color.hpp"
    #include <string>
namespace Arcade {
    class Text : public Transformable {
        public:
            enum Style {
                Regular = 0,
                Bold = 1 << 0,
                Italic = 1 << 1,
                Underlined = 1 << 2,
                StrikeThrough = 1 << 3,
            };
        public:
            Text(
                const std::string &string = "",
                const Color &color = White,
                const Color &backgroundColor = Black,
                Style style = Regular
            );
            ~Text() = default;
        public:
            void setString(const std::string &string);
            void setStyle(Style style);
            void setColor(const Color& color);
            void setBackgroundColor(const Color &color);
            void setFont(const std::string &fontPath);
            void setCharacterSize(unsigned int size);
        public:
            const std::string &getString() const;
            Style getStyle() const;
            const Color &getColor() const;
            const Color &getBackgroundColor() const;
            const std::string &getFont() const;
            unsigned int getCharacterSize() const;
        private:
            std::string _string;
            Style _style;
            Color _color;
            Color _backgroundColor;
            std::string _font;
            unsigned int _size;
    };
}

#endif /* ARCADE_TEXT_HPP */
