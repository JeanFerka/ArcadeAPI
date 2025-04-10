/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Model.hpp
*/
#include "Transformable3d.hpp"
#include <iostream>
#include "Rect.hpp"

#ifndef ARCADE_MODEL_HPP
    #define ARCADE_MODEL_HPP

namespace Arcade {
    class Model : public Transformable3d
    {
        public:
            Model(
                const Vector3<float> size = {1.0f, 1.0f, 1.0f},
                const Vector3<float> position = {0.0f, 0.0f, 0.0f}
            );
            Model(
                const std::string &meshPath,
                const std::string &texturePath,
                const Vector3<float> size = {1.0f, 1.0f, 1.0f},
                const Vector3<float> position = {0.0f, 0.0f, 0.0f}
            );
            Model(
                const std::string &meshPath,
                const std::string &texturePath,
                const Rect3d<int> &textureRect,
                const Vector3<float> size = {1.0f, 1.0f, 1.0f},
                const Vector3<float> position = {0.0f, 0.0f, 1.0f}
            );
            ~Model() = default;
        public:
            void setTexture(const std::string &texturePath);
            void setTextureRect(const Rect3d<int> &textureRect);
            void setMesh(const std::string &meshPath);
        public:
            const std::string &getTexture() const;
            const Rect3d<int> &getTextureRect() const;
            const std::string &getMesh() const;
        private:
        Vector3<float> _size;
            std::string _texture;
            Rect3d<int> _textureRect;
            std::string _mesh;
    };
}

#endif /* ARCADE_MODEL_HPP */
