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
    _size = {1, 1};
    _angle = 0;
}

void Arcade::Transformable::setPosition(const Vector2<float> &position)
{
    this->_position = position;
}

void Arcade::Transformable::setSize(const Vector2<float> &size)
{
    this->_size = size;
}

void Arcade::Transformable::setAngle(float angle)
{
    this->_angle = angle;
}

const Arcade::Vector2<float> &Arcade::Transformable::getPosition() const
{
    return this->_position;
}

const Arcade::Vector2<float> &Arcade::Transformable::getSize() const
{
    return this->_size;
}

float Arcade::Transformable::getAngle() const
{
    return this->_angle;
}

void Arcade::Transformable::translate(const Vector2<float> &translation)
{
    this->_position += translation;
}

void Arcade::Transformable::scale(const Vector2<float> &scale)
{
    this->_size += scale;
}

void Arcade::Transformable::rotate(float rotation)
{
    this->_angle += rotation;
}
