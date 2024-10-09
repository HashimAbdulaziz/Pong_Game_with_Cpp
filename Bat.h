//
// Created by HashimAbdulAziz on 10/9/2024.
//

#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Bat {
    private:
        Vector2f m_Position;
        RectangleShape m_Shape; // A RectangleShape object
        float m_Speed = 1000.0f;
        bool m_MovingLeft = false;
        bool m_MovingRight = false;

    public:
        // We write our own Constructor to initialize Starting Position
        // Note that: user will input the Parameters, and we will handle it my definition on this function
        Bat (float startX, float startY);

        FloatRect getPosition();
        RectangleShape getShape();
        void moveLeft();
        void moveRight();
        void stopLeft();
        void stopRight();
        void update(Time dt);

};
