#include <QApplication>
#include <QMainWindow>
#include <QLabel>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("CAD3d - Prototype");
    auto *label = new QLabel("Hello CAD world!");
    label->setAlignment(Qt::AlignCenter);
    window.setCentralWidget(label);
    window.resize(800,600);
    window.show();

    return app.exec();

}