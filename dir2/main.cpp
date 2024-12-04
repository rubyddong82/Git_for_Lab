#include <QtWidgets>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QLabel* widget = new QLabel("<h1>Hello World!</h1>");
  widget->show();

  QFont font("Times", 14, QFont::Bold);

  widget->setStyleSheet("color: red");

  widget->setAlignment(Qt::AlignCenter);

  return app.exec();
}
