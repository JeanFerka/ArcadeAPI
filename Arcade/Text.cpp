/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Text.cpp
*/

#include "Text.hpp"

Arcade::Text::Text(
    const std::string &string,
    const Color &color,
    const Color &backgroundColor,
    Style style)
{
    _string = string;
    _style = style;
    _color = color;
    _backgroundColor = backgroundColor;
    _font = "./assets/font.ttf";
    _size = 30;
}

void Arcade::Text::setString(const std::string &string)
{
    this->_string = string;
}

void Arcade::Text::setStyle(Style style)
{
    this->_style = style;
}

void Arcade::Text::setColor(const Color& color)
{
    this->_color = color;
}

void Arcade::Text::setBackgroundColor(const Color& color)
{
    this->_backgroundColor = color;
}

void Arcade::Text::setFont(const std::string &fontPath)
{
    this->_font = fontPath;
}

void Arcade::Text::setCharacterSize(unsigned int size)
{
    this->_size = size;
}

const std::string &Arcade::Text::getString() const
{
    return this->_string;
}

Arcade::Text::Style Arcade::Text::getStyle() const
{
    return this->_style;
}

const Arcade::Color &Arcade::Text::getColor() const
{
    return this->_color;
}

const Arcade::Color &Arcade::Text::getBackgroundColor() const
{
    return this->_backgroundColor;
}

const std::string &Arcade::Text::getFont() const
{
    return this->_font;
}

unsigned int Arcade::Text::getCharacterSize() const
{
    return this->_size;
}
