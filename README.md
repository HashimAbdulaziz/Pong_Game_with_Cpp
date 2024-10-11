# Pong Game in C++ using SFML

Welcome to my **Pong Game**, where paddles meet bouncing balls, all powered by C++ and the **SFML** framework! I made this while reading *"Beginning C++ Game Programming"* by **John Horton** — you know, just to brush up on my C++ skills and give OOP some love.




https://github.com/user-attachments/assets/750c731d-7012-4592-8bd2-b809f31a312e


## Features (aka the fun stuff)

- **Classic Pong**: Yep, the bat, the ball, the bouncing — all here! Move the bat to keep that ball in play.
- **Ramp Up the Challenge**: I cranked up the speed! The ball and bat move faster as you play, so good luck keeping up!
- **Double Trouble**: Hit a high score? Congrats! Now deal with a second ball. Because one ball isn’t enough chaos, right?

## Collision Detection (Sounds fancy, but it’s simple)

This game uses **AABB Collision Detection**. What’s that? Basically, the ball and bat have invisible boxes around them, and when they touch, stuff happens. It’s not fancy physics, but it’s fast and gets the job done for our simple game.

## Why This Was Fun to Build

I learned (or relearned) a few cool things along the way:
- **Classes**: Game objects like the Bat and Ball are made into neat little classes. It’s OOP in action!
- **Constructors**: Setting up game objects with constructors to make everything work smoothly.
- **Sprites and Textures**: Gave the bat and ball a visual identity, thanks to SFML.

## How to Play (a.k.a. How to Win)

- **Move the bat**: Left and right arrow keys are your best friends here.
- **Keep the ball in play**: If it hits the bottom, game over! Oh, and try not to freak out when the second ball shows up.

## What Could Make This Cooler?

- **Physics-Based Collisions**: Want the ball to bounce like in real life? Maybe I’ll add physics-based collisions in a future version, but for now, AABB gets the job done.
- **Better Graphics**: Imagine better backgrounds and slicker sprites. It’s on my to-do list (eventually).

