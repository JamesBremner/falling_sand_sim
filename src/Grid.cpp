#include <Grid.hpp>

Grid::Grid() : grid_(GridP::x_cells, GridP::y_cells) {
    for (int y = 0; y < grid_.rows(); ++y) {
        for (int x = 0; x < grid_.cols(); ++x) {
            grid_[y][x].get().setPosition({CellStats::Cell * x, CellStats::Cell * y});
        }
    }
}

void Grid::draw(sf::RenderWindow& win) {
    for (int y = 0; y < grid_.rows(); ++y) {
        for (int x = 0; x < grid_.cols(); ++x) {
            win.draw(grid_[y][x].get());
        }
    }
}