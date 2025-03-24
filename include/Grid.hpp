#pragma once

#include <Matrix2D.hpp>
#include <Cell.hpp>
#include <Constants.hpp>

class Grid {
private:
    Matrix2D<Cell> grid_;
public:
    Grid();

    void draw(sf::RenderWindow& win);
    void set_is_free(sf::Vector2i mouse_pos);
    void reset();
    void update();
};