#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QLabel>
#include <Contacto>

class LibretaContactosWidget : public QWidget {
    Q_OBJECT

public:
    LibretaContactosWidget(QWidget *parent = nullptr);

private slots:
    void agregarContacto();
    void buscarContacto();

private:
    LibretaContactos libreta;

    QLineEdit *nombreLineEdit;
    QLineEdit *telefonoLineEdit;
    // Añade más campos según tus necesidades

    QTextEdit *resultadoTextEdit;
};

LibretaContactosWidget::LibretaContactosWidget(QWidget *parent)
    : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    nombreLineEdit = new QLineEdit(this);
    telefonoLineEdit = new QLineEdit(this);
    // Crea más QLineEdit según tus necesidades

    QPushButton *agregarButton = new QPushButton("Agregar Contacto", this);
    connect(agregarButton, &QPushButton::clicked, this, &LibretaContactosWidget::agregarContacto);

    QPushButton *buscarButton = new QPushButton("Buscar Contacto", this);
    connect(buscarButton, &QPushButton::clicked, this, &LibretaContactosWidget::buscarContacto);

    resultadoTextEdit = new QTextEdit(this);
    resultadoTextEdit->setReadOnly(true);

    layout->addWidget(new QLabel("Nombre:", this));
    layout->addWidget(nombreLineEdit);
    layout->addWidget(new QLabel("Teléfono:", this));
    layout->addWidget(telefonoLineEdit);
    // Agrega más widgets según tus necesidades
    layout->addWidget(agregarButton);
    layout->addWidget(buscarButton);
    layout->addWidget(new QLabel("Resultados:", this));
    layout->addWidget(resultadoTextEdit);

    setLayout(layout);
}

void LibretaContactosWidget::agregarContacto() {
    // Implementa la lógica para agregar un contacto en libreta
    // Puedes usar los datos de los QLineEdit y agregar un nuevo contacto a la libreta
}

void LibretaContactosWidget::buscarContacto() {
    // Implementa la lógica para buscar un contacto en libreta
    // Puedes usar el nombre del QLineEdit para buscar el contacto y mostrar los resultados en QTextEdit
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    LibretaContactosWidget libretaWidget;
    libretaWidget.show();

    return app.exec();
}

#include "main.moc"
