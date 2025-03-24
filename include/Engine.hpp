#pragma once
#include <SFML/Graphics.hpp>
#include <Constants.hpp>

class Engine {
private:
    sf::RenderWindow win_;

    void draw();
    void check_events();

public:
    Engine();

    void start();
};