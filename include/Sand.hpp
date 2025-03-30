#pragma once

#include <vector>
#include <memory>

#include <SFML/Graphics.hpp>

#include <Grain.hpp>

class Sand
{

private:
    typedef std::shared_ptr<Grain> grain_t;
    typedef std::vector<std::vector<grain_t>> grid_t;

    grid_t grid_;

    void freeGrainsAbove( const sf::Vector2i& location );
    
public:
    Sand();

    void update();
    void add_grain(sf::Vector2i mouse_pos);
    void draw( sf::RenderWindow& window);

    grid_t &getGrid()
    {
        return grid_;
    }
};