/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Transformable3d.hpp
*/

#ifndef ARCADE_TRANSFORMABLE3D_HPP
    #define ARCADE_TRANSFORMABLE3D_HPP

    #include "Vector.hpp"

namespace Arcade {
    class Transformable3d {
        public:
            Transformable3d();
            ~Transformable3d() = default;
        public:
            void setPosition(const Vector3<float> &position);
            void setSize(const Vector3<float> &size);
            void setAngle(float angle);
        public:
            const Vector3<float> &getPosition() const;
            const Vector3<float> &getSize() const;
            float getAngle() const;
        public:
            void translate(const Vector3<float> &translation);
            void scale(const Vector3<float> &scale);
            void rotate(float rotation);
        protected:
            Vector3<float> _position;
            Vector3<float> _size;
            float _angle;
    };
}

#endif /* ARCADE_TRANSFORMABLE3D_HPP */