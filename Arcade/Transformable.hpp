/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Transformable.hpp
*/

#ifndef ARCADE_TRANSFORMABLE_HPP
    #define ARCADE_TRANSFORMABLE_HPP

#include "Vector.hpp"
namespace Arcade {
    class Transformable {
        public:
            Transformable();
            ~Transformable() = default;
        public:
            void setPosition(const Vector2<float> &position);
            void setScale(const Vector2<float> &scale);
            void setRotation(float rotation);
        public:
            const Vector2<float> &getPosition() const;
            const Vector2<float> &getScale() const;
            float getRotation() const;
        public:
            void move(const Vector2<float> &position);
            void scale(const Vector2<float> &scale);
            void rotate(float rotation);
        protected:
            Vector2<float> _position;
            Vector2<float> _scale;
            float _rotation;
    };
}

#endif /* ARCADE_TRANSFORMABLE_HPP */
