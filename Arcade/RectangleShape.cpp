/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** RectangleShape.cpp
*/

#include "RectangleShape.hpp"

Arcade::RectangleShape::RectangleShape(
    const Vector2<float> &size,
    const Vector2<float> &position,
    const Color &color,
    const Color &outlineColor)
{
    _size = size;
    _position = position;
    _color = color;
    _outlineColor = outlineColor;
}

void Arcade::RectangleShape::setColor(const Color &color)
{
    _color = color;
}

void Arcade::RectangleShape::setOutlineColor(const Color &color)
{
    _outlineColor = color;
}

const Arcade::Color &Arcade::RectangleShape::getColor() const
{
    return _color;
}

const Arcade::Color &Arcade::RectangleShape::getOutlineColor() const
{
    return _outlineColor;
}
