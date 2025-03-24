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
            if (!grid_[y][x].is_free()) {
                win.draw(grid_[y][x].get());
            }
        }
    }
}

void Grid::set_is_free(sf::Vector2i mouse_pos) {
    for (int y = 0; y < grid_.rows(); ++y) {
        for (int x = 0; x < grid_.cols(); ++x) {
            if (mouse_pos.x >= x * CellStats::Cell && mouse_pos.x <= x * CellStats::Cell + CellStats::Cell &&  // check left side and right side
                mouse_pos.y >= y * CellStats::Cell && mouse_pos.y <= y * CellStats::Cell + CellStats::Cell &&  // check top and bottom
                grid_[y][x].is_free()) { // Check the availability of the cell
                    grid_[y][x].set_is_free(false);
                    std::cout << "Created\n";
                }
        }
    }
}