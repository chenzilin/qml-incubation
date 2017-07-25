#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "incubator.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Incubator incubator;

    QQmlApplicationEngine engine;
    engine.setIncubationController(&incubator);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
