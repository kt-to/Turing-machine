#pragma "once"
#include <QApplication>
#include "Main_screen.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Main_screen kt_window;
    kt_window.build();
    kt_window.show();
    return app.exec();
}
