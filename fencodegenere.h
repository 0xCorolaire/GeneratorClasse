#ifndef HEADER_FENCODEGENERE
#define HEADER_FENCODEGENERE
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QSlider>
#include <QMessageBox>
#include <QInputDialog>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QGridLayout>
#include <QLineEdit>
#include <QGroupBox>
#include <QDateEdit>
#include <QTextEdit>

#include <QtGui>

class FenCodeGenere : public QDialog
{
    public:
        FenCodeGenere(QString &code, QWidget *parent);

    private:
        QTextEdit *codeGenere;
        QPushButton *fermer;
};


#endif
