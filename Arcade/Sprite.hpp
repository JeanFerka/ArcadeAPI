/*
** EPITECH PROJECT, 2025
** Arcade
** File description:
** Sprite.hpp
*/

#ifndef ARCADE_SPRITE_HPP
    #define ARCADE_SPRITE_HPP

    #include "Transformable.hpp"
    #include "Vector.hpp"
    #include "Color.hpp"
    #include "Rect.hpp"
    #include <string>

namespace Arcade {
    class Sprite : public Transformable {
        public:
            Sprite(
                const Vector2<float> size = {1.0f, 1.0f},
                const Vector2<float> position = {0.0f, 0.0f}
            );
            Sprite(
                const std::string &texturePath,
                const Vector2<float> size = {1.0f, 1.0f},
                const Vector2<float> position = {0.0f, 0.0f}
            );
            Sprite(
                const std::string &texturePath,
                const Rect<int> &textureRect,
                const Vector2<float> size = {1.0f, 1.0f},
                const Vector2<float> position = {0.0f, 0.0f}
            );
            ~Sprite() = default;
        public:
            void setTexture(const std::string &texturePath);
            void setTextureRect(const Rect<int> &textureRect);
        public:
            const std::string &getTexture() const;
            const Rect<int> &getTextureRect() const;
        private:
            std::string _texture;
            Rect<int> _textureRect;
    };
}

#endif /* ARCADE_SPRITE_HPP */
