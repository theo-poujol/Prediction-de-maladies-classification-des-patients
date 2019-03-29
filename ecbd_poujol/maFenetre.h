#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QWidget>
#include <QMainWindow>
#include <QComboBox>
#include <QString>
#include <QLabel>
#include <QPushButton>
#include "charger_csv.h"

class MaFenetre : public QMainWindow {

    Q_OBJECT
    signals :
        public slots :
            //void setFievre();
            void predire();


    public:
        MaFenetre(QWidget *parent = 0);
        void initWindow();
        void displayLabels();
        void displayButton();
        void displayComboBox();

    private :
        QLabel *m_lab, *m_labFievre, *m_labDouleur, *m_labToux, *m_labMaladie;
        QPushButton *m_but;
        QComboBox *m_comboFievre, *m_comboDouleur, *m_comboToux;
        QString m_fievre, m_douleur, m_toux;
        CVString m_vet;
        CMatString m_mat;

};

#endif // MAFENETRE_H
