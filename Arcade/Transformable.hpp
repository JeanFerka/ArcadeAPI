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
            void setSize(const Vector2<float> &size);
            void setAngle(float angle);
        public:
            const Vector2<float> &getPosition() const;
            const Vector2<float> &getSize() const;
            float getAngle() const;
        public:
            void translate(const Vector2<float> &translation);
            void scale(const Vector2<float> &scale);
            void rotate(float rotation);
        protected:
            Vector2<float> _position;
            Vector2<float> _size;
            float _angle;
    };
}

#endif /* ARCADE_TRANSFORMABLE_HPP */
