#pragma once
#include <qpushbutton.h>
#include <qwidget.h>
#include <qlineedit.h>
#include <qspinbox.h>

class TextFilmWidget : public QWidget
{
	Q_OBJECT

signals:

	void textIntrodus(QString* text);

private:

	QString* rezultat = nullptr;
	QString& informatieDorita;
	QLineEdit* linieText;
	QPushButton* butonOK;

	void conecteazaActiune();
	void executaActiune();

public:

	TextFilmWidget(QString& informatieDorita, QWidget* parent = nullptr);

};

class NumarFilmWidget : public QWidget
{
	Q_OBJECT

signals:

	void numarIntrodus(int* numar);

private:

	int* rezultat = nullptr;
	QString& informatieDorita;
	QSpinBox* boxNumar;
	QPushButton* butonOk;

	void conecteazaActiune();
	void executaActiune();

public:

	NumarFilmWidget(QString& informatieDorita, QWidget* parent = nullptr);
};