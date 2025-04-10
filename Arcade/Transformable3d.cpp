/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Transformable3d.hpp
*/

#include "Transformable3d.hpp"

Arcade::Transformable3d::Transformable3d()
{
    _position = {0, 0, 0};
    _size = {1, 1, 1};
    _angle = 0;
}

void Arcade::Transformable3d::setPosition(const Vector3<float> &position)
{
    this->_position = position;
}

void Arcade::Transformable3d::setSize(const Vector3<float> &size)
{
    this->_size = size;
}

void Arcade::Transformable3d::setAngle(float angle)
{
    this->_angle = angle;
}

const Arcade::Vector3<float> &Arcade::Transformable3d::getPosition() const
{
    return this->_position;
}

const Arcade::Vector3<float> &Arcade::Transformable3d::getSize() const
{
    return this->_size;
}

float Arcade::Transformable3d::getAngle() const
{
    return this->_angle;
}

void Arcade::Transformable3d::translate(const Vector3<float> &translation)
{
    this->_position += translation;
}

void Arcade::Transformable3d::scale(const Vector3<float> &scale)
{
    this->_size += scale;
}

void Arcade::Transformable3d::rotate(float rotation)
{
    this->_angle += rotation;
}
