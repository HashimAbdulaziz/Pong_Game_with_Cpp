//
// Created by HashimAbdulAziz on 10/10/2024.
//

#include "Ball.h"

// This the constructor function
Ball::Ball(float startX, float startY) : m_Position(startX, startY) {
    m_Shape.setSize(sf::Vector2f(10, 10));
    m_Shape.setPosition(m_Position);
}

// This function will four points of the shape corner
// Note that: This function will be used for collision detection
FloatRect Ball::getPosition() {
    return m_Shape.getGlobalBounds();
}

// The getShape function returns m_Shape so that it can be drawn in each frame of the game loop
RectangleShape Ball::getShape() {
    return m_Shape;
}

// The getXVelocity function tells the main function which direction the ball is traveling in
float Ball::getXVelocity() {
    return m_DirectionX;
}

void Ball::reboundSides() {
    m_DirectionX = -m_DirectionX;
}

void Ball::reboundBatOrTop() {
    m_DirectionY = -m_DirectionY;
}

// The reboundBottom function repositions the ball at the top center of the screen and sends it downward.
// This is just what we want after the player has missed a ball, and it has hit the bottom of the screen.
void Ball::reboundBottom() {
    m_Position.y = 0;
    m_Position.x = 500;
    m_DirectionY = -m_DirectionY;
}

void Ball::update(Time dt) {
    // Update the ball's position
    m_Position.x += m_DirectionX * m_Speed * dt.asSeconds();
    m_Position.y += m_DirectionY * m_Speed * dt.asSeconds();
    // Move the Ball
    m_Shape.setPosition(m_Position);
}






