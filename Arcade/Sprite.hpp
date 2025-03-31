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
            Sprite() = delete;
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
                const Rect<float> &textureRect,
                const Vector2<float> size = {1.0f, 1.0f},
                const Vector2<float> position = {0.0f, 0.0f}
            );
            ~Sprite() = default;
        public:
            void setColor(const Color &color);
            void setSize(const Vector2<float> &size);
            void setTexture(const std::string &texturePath);
            void setTextureRect(const Rect<float> &textureRect);
        public:
            const Vector2<float> &getColor();
            const Vector2<float> &getSize();
            const std::string &getTexture();
            const Rect<float> &getTextureRect();
        private:
            Vector2<float> _size;
            std::string _texture;
            Rect<float> _textureRect;
    };
}

#endif /* ARCADE_SPRITE_HPP */
