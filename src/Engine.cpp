#include <Engine.hpp>

Engine::Engine() : win_(sf::VideoMode({Window::width, Window::height}), "Falling Sand Simulator", sf::Style::None) {}

void Engine::check_events() {
    while (const std::optional event = win_.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                win_.close();
        }
}

void Engine::draw() {
    win_.clear();
    win_.display();
}

void Engine::start() {
    while (win_.isOpen())
    {
        check_events();
        draw();
    }
}
