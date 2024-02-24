#include "Main_screen.h"

void Main_screen::build() {
    resize(width_, height_);

    // цвет заднего фона
    QLinearGradient gradient(0, 0, 0, height_);
    QColor col("#17BEBB");
    QColor col2("#CEFF1A");
    gradient.setColorAt(0, col2);
    gradient.setColorAt(1, col);
    setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Window, gradient);
    setPalette(palette);

    // кнопки скорости
    

}

void Main_screen::add_speed_() {
    if (speed_ < 200) {
        speed_ -= 100;
    }
}

void Main_screen::red_speed_() {
    if (speed_ > 1500) {
        speed_ += 100;
    }
}