#include <iostream>
#include <sstream>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include "Bat.h"





int main() {
    // Let's Create a Window object with Video Mode
    VideoMode vm(1920, 1080);
    RenderWindow window(vm, "Pong", Style::Fullscreen); // Create and open a window for the game

    int score = 0;
    int lives = 3;

    // Create a bat instance and initialize its position at the bottom center of the screen
    Bat bat(1920 / 2, 1080 - 20);

    // Create a Text object called hud
    Text hud;
    Font font;
    font.loadFromFile("C:/Users/HashimAbdulAzizHashi/CLionProjects/Pong_Game_with_Cpp/fonts/DS-DIGIT.ttf"); // A cool retro-style font!
    hud.setFont(font);  // assign the cool font to our text
    hud.setCharacterSize(75);   // Make it nice and big
    hud.setFillColor(Color::White); // Choose a color
    hud.setPosition(20, 20);

    // Here is our clock for timing everything
    Clock clock;


    while(window.isOpen()) {

        /* Handle the Player inputs */
        Event event;

        while (window.pollEvent(event)){
            if (event.type == Event::Closed)    // Quit the game when the window is closed
                window.close();
        }

        // Handle the player quitting
        if (Keyboard::isKeyPressed(Keyboard::Escape))
            window.close();

        // Handle the pressing and releasing of the arrow keys
        if (Keyboard::isKeyPressed(Keyboard::Left))
            bat.moveLeft();
        else
            bat.stopLeft();

        if (Keyboard::isKeyPressed(Keyboard::Right))
            bat.moveRight();
        else
            bat.stopRight();



        // Update the hud text
        std::stringstream ss;
        ss << "Score:" << score << "    Lives:" << lives;
        hud.setString(ss.str());


        /* Update the Drawings */
        window.clear();

        window.draw(hud);
        window.draw(bat.getShape());


        window.display();







    }





    return 0;
}