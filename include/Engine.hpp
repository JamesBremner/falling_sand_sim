#pragma once
#include <SFML/Graphics.hpp>
#include <Grid.hpp>
#include <Constants.hpp>

class Engine {
private:
    sf::RenderWindow win_;
    Grid grid_;

    void draw();
    void check_events();

public:
    Engine();

    void start();
};