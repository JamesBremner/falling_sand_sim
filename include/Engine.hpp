#pragma once
#include <SFML/Graphics.hpp>
#include <Cell.hpp>
#include <Matrix2D.hpp>
#include <Constants.hpp>

class Engine {
private:
    sf::RenderWindow win_;
    Matrix2D<Cell> grid_;

    void draw();
    void check_events();

public:
    Engine();

    void start();
};