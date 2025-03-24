#pragma once

#include <SFML/Graphics.hpp>

namespace Window {
    constexpr int Width = 2560;
    constexpr int Height = 1440;
    constexpr int Fps = 120;
}


namespace CellStats {
    constexpr float Cell = 20.f;
    constexpr sf::Vector2f Cell2f = {Cell, Cell};
    constexpr sf::Color Color = sf::Color(194, 178, 128);
}

namespace GridP {
    constexpr int x_cells = Window::Width / CellStats::Cell;
    constexpr int y_cells = Window::Height / CellStats::Cell;
}