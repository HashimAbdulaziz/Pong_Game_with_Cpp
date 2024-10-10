//
// Created by HashimAbdulAziz on 10/10/2024.
//

#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;


class Ball {
private:
    Vector2f m_Position;
    RectangleShape m_Shape;
    float m_Speed = 300.0f;
    float m_DirectionX = .2f;
    float m_DirectionY = .2f;

public:
    Ball(float startX, float startY);

    FloatRect getPosition();
    RectangleShape getShape();
    float getXVelocity();

    // these 3 functions handle what happens
    // when the ball collides with various places
    void reboundSides();
    void reboundBatOrTop();
    void reboundBottom();

    void update(Time dt);

};



