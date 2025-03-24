#include <Engine.hpp>

Engine::Engine() : win_(sf::VideoMode({Window::Width, Window::Height}), "Falling Sand Simulator", sf::Style::None) {
    win_.setFramerateLimit(Window::Fps);
}

void Engine::check_events() {
    while (const std::optional event = win_.pollEvent())
        {
            if (event->is<sf::Event::Closed>()) {
                win_.close();
            }
            if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
                grid_.set_is_free(sf::Mouse::getPosition(win_));
            }
        }
}

void Engine::draw() {
    win_.clear();
    grid_.draw(win_);
    win_.display();
}

void Engine::start() {
    while (win_.isOpen())
    {
        check_events();
        draw();
    }
}
