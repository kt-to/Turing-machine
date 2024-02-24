#pragma "once"

#include "QMainWindow"
#include "QPushButton"

class Main_screen : public QMainWindow {
public:
    void build();

private:
    void add_speed_();
    void red_speed_();
    int height_ = 800;
    int width_ = 600;
    int speed_ = 1000;
    QPushButton* speed_up_;
    QPushButton* speed_down_;
};
