#include <QApplication>
#include <QFont>
#include "maFenetre.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    QApplication app(argc,argv);
    MaFenetre mafenetre;
    mafenetre.show();
    return app.exec();


}
