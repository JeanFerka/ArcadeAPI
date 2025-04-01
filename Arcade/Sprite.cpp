/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Sprite.cpp
*/

#include "Sprite.hpp"

Arcade::Sprite::Sprite(const Vector2<float> size, const Vector2<float> position)
{
    this->_size = size;
    this->_position = position;
}

Arcade::Sprite::Sprite(
    const std::string &texturePath,
    const Vector2<float> size,
    const Vector2<float> position)
{
    this->_texture = texturePath;
    this->_size = size;
    this->_position = position;
}

Arcade::Sprite::Sprite(
    const std::string &texturePath,
    const Rect<int> &textureRect,
    const Vector2<float> size,
    const Vector2<float> position)
{
    this->_texture = texturePath;
    this->_textureRect = textureRect;
    this->_size = size;
    this->_position = position;
}

void Arcade::Sprite::setTexture(const std::string &texturePath)
{
    this->_texture = texturePath;
}

void Arcade::Sprite::setTextureRect(const Rect<int> &textureRect)
{
    this->_textureRect = textureRect;
}

const std::string &Arcade::Sprite::getTexture() const
{
    return this->_texture;
}

const Arcade::Rect<int> &Arcade::Sprite::getTextureRect() const
{
    return this->_textureRect;
}
