#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include <Constants.hpp>

class Cell {
private:
    sf::RectangleShape cell_;
    bool is_free_;
    bool is_upd_;

public:
    Cell();

    sf::RectangleShape& get();
    bool is_free();
    bool is_upd();
};