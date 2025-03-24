#pragma once

#include <Matrix2D.hpp>
#include <Cell.hpp>

class Grid {
private:
    Matrix2D<Cell> grid_;
public:
    Grid();

    void draw(sf::RenderWindow& win);
};