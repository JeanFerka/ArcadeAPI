/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Model.cpp
*/

#include "Model.hpp"
#include "Rect.hpp"
#include <iostream>

Arcade::Model::Model(const Vector3<float> size, const Vector3<float> position)
{
    this->_size = size;
    this->_position = position;
}

Arcade::Model::Model(
    const std::string &meshPath,
    const std::string &texturePath,
    const Vector3<float> size,
    const Vector3<float> position)
{
    this->_texture = texturePath;
    this->_size = size;
    this->_position = position;
}

Arcade::Model::Model(
    const std::string &meshPath,
    const std::string &texturePath,
    const Rect3d<int> &textureRect,
    const Vector3<float> size,
    const Vector3<float> position)
{
    this->_texture = texturePath;
    this->_textureRect = textureRect;
    this->_size = size;
    this->_position = position;
}

void Arcade::Model::setTexture(const std::string &texturePath)
{
    this->_texture = texturePath;
}

void Arcade::Model::setTextureRect(const Rect3d<int> &textureRect)
{
    this->_textureRect = textureRect;
}

const std::string &Arcade::Model::getTexture() const
{
    return this->_texture;
}

const Arcade::Rect3d<int> &Arcade::Model::getTextureRect() const
{
    return this->_textureRect;
}

void Arcade::Model::setMesh(const std::string &meshPath)
{
    this->_mesh = meshPath;
}

const std::string &Arcade::Model::getMesh() const
{
    return this->_mesh;
}
