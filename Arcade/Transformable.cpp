/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Transformable.cpp
*/

#include "Transformable.hpp"

Arcade::Transformable::Transformable()
{
    _position = {0, 0};
    _scale = {1, 1};
    _rotation = 0;
}

void Arcade::Transformable::setPosition(const Vector2<float> &position)
{
    this->_position = position;
}

void Arcade::Transformable::setScale(const Vector2<float> &scale)
{
    this->_scale = scale;
}

void Arcade::Transformable::setRotation(float rotation)
{
    this->_rotation = rotation;
}

const Arcade::Vector2<float> &Arcade::Transformable::getPosition() const
{
    return this->_position;
}

const Arcade::Vector2<float> &Arcade::Transformable::getScale() const
{
    return this->_scale;
}

float Arcade::Transformable::getRotation() const
{
    return this->_rotation;
}

void Arcade::Transformable::move(const Vector2<float> &position)
{
    this->_position += position;
}

void Arcade::Transformable::scale(const Vector2<float> &scale)
{
    this->_scale += scale;
}

void Arcade::Transformable::rotate(float rotation)
{
    this->_rotation += rotation;
}
