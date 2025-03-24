#include <Cell.hpp>

Cell::Cell() : is_free_(true), is_upd_(false) {
    cell_.setFillColor(CellStats::Color);
    cell_.setSize(CellStats::Cell2f);
}


sf::RectangleShape& Cell::get() {
    return cell_;
}

bool Cell::is_free() {
    return is_free_;
}

bool Cell::is_upd() {
    return is_upd_;
}

void Cell::set_is_free(bool is_free) {
    is_free_ = is_free;
}
void Cell::set_is_upd(bool is_upd) {
    is_upd_ = is_upd;
}