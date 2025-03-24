#include <Engine.hpp>

Engine::Engine() : win_(sf::VideoMode({Window::Width, Window::Height}), "Falling Sand Simulator", sf::Style::None), grid_(GridP::x_cells, GridP::y_cells) {
    win_.setFramerateLimit(Window::Fps);
    for (int y = 0; y < grid_.rows(); ++y) {
        for (int x = 0; x < grid_.cols(); ++x) {
            grid_[y][x].get().setPosition({x * 20.f, y * 20.f});
        }
    }
}

void Engine::check_events() {
    while (const std::optional event = win_.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                win_.close();
        }
}

void Engine::draw() {
    win_.clear();
    for (int i = 0; i < grid_.rows(); ++i) {
        for (int j = 0; j < grid_.cols(); ++j) {
            win_.draw(grid_[i][j].get());
        }
    }
    win_.display();
}

void Engine::start() {
    while (win_.isOpen())
    {
        check_events();
        draw();
    }
}
