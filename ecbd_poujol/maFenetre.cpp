#include "maFenetre.h"

// CONSTRUCTEUR

MaFenetre::MaFenetre(QWidget *parent) : QMainWindow(parent) {

    initWindow();
    displayLabels();
    displayButton();
    displayComboBox();

}


void MaFenetre::initWindow() {

    setFixedSize(800,600);
    setStyleSheet("background-color: white;");

    // CHARGEMENT DONNÉES DU FICHIER CSV
    read_csv(m_mat,m_vet,"data.csv");

}

void MaFenetre::displayLabels() {

    // LABEL TITRE DU HAUT

    m_lab = new QLabel("          CLASSIFICATION DES PATIENTS - PREDICTION ",this);
    m_lab->setFont(QFont("Helvetica",20,QFont::Bold,true));
    m_lab->setGeometry(0,0,800,40);
    m_lab->setStyleSheet("QLabel{background-color:black; color:white;}");

    // LABEL FIEVRE

    m_labFievre = new QLabel("Fièvre",this);
    m_labFievre->setFont(QFont("Helvetica",10,QFont::StyleItalic,true));
    m_labFievre->move(290,110);

    // LABEL DOULEUR


    m_labDouleur = new QLabel("Douleur",this);
    m_labDouleur->setFont(QFont("Helvetica",10,QFont::StyleItalic,true));
    m_labDouleur->move(390,110);

    // LABEL TOUX

    m_labToux = new QLabel("Toux",this);
    m_labToux->setFont(QFont("Helvetica",10,QFont::StyleItalic,true));
    m_labToux->move(490,110);

    // LABEL MALADIE

    m_labMaladie = new QLabel("Maladie : ",this);
    m_labMaladie->hide();


}

void MaFenetre::displayButton() {

    // BOUTON PRÉDIRE

    m_but = new QPushButton("Prédire",this);
    m_but->setGeometry(360,280,80,40);
    connect(m_but, SIGNAL(clicked()), this, SLOT(predire()));
}

void MaFenetre::predire() {

    m_labMaladie->setFont(QFont("Helvetica",20,QFont::Bold,true));
    m_labMaladie->setGeometry(220,360,300,200);
    m_labMaladie->show();

}

void MaFenetre::displayComboBox() {

    // COMBO BOX FIEVRE

    m_comboFievre = new QComboBox(this);
    m_comboFievre->setGeometry(270,150,80,20);
    m_comboFievre->addItem("NULL");
    m_comboFievre->addItem("OUI");
    m_comboFievre->addItem("NON");



    // COMBO BOX DOULEUR

    m_comboDouleur = new QComboBox(this);
    m_comboDouleur->setGeometry(370,150,80,20);
    m_comboDouleur->addItem("NULL");
    m_comboDouleur->addItem("Abdomen");
    m_comboDouleur->addItem("Gorge");
    m_comboDouleur->addItem("NON");

    // COMBO BOX TOUX

    m_comboToux = new QComboBox(this);
    m_comboToux->setGeometry(470,150,80,20);
    m_comboToux->addItem("NULL");
    m_comboToux->addItem("OUI");
    m_comboToux->addItem("NON");

}


