/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** CircleShape.cpp
*/

#include "CircleShape.hpp"

Arcade::CircleShape::CircleShape(float radius, const Arcade::Vector2<float> &position, const Arcade::Color &color, const Arcade::Color &outlineColor)
{
    _radius = radius;
    _position = position;
    _color = color;
    _outlineColor = outlineColor;
}

void Arcade::CircleShape::setRadius(float radius)
{
    _radius = radius;
}

void Arcade::CircleShape::setColor(const Color &color)
{
    _color = color;
}

void Arcade::CircleShape::setOutlineColor(const Color &color)
{
    _outlineColor = color;
}

float Arcade::CircleShape::getRadius() const
{
    return _radius;
}

const Arcade::Color &Arcade::CircleShape::getColor() const
{
    return _color;
}

const Arcade::Color &Arcade::CircleShape::getOutlineColor() const
{
    return _outlineColor;
}
