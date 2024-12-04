#include <QtWidgets>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget* window = new QWidget();
    window->setWindowTitle("QHBoxLayout Test");
    window->show();

    QPushButton* button1 = new QPushButton();
    QPushButton* button2 = new QPushButton();
    QPushButton* button3 = new QPushButton();

    QHBoxLayout* layout = new QHBoxLayout();
    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3); 
    
    window->setLayout(layout);
    
    QLabel* label = new QLabel("&Name:");
    QLineEdit* nameField = new QLineEdit();
    label->setBuddy(nameField);

    return app.exec();          
}