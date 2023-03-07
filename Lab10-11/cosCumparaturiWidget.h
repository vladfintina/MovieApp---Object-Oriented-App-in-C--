#pragma once
#include <qwidget.h>
#include <qlineedit.h>
#include <qlistwidget.h>
#include <qpushbutton.h>
#include "service.h"
#include "informationFilmWidget.h"

class CosCumparaturiObservator :public QWidget
{
public:
	virtual void update() = 0;

	CosCumparaturiObservator(QWidget* parent = nullptr): QWidget(parent) {}
};

inline void notificaObservator(CosCumparaturiObservator* observator)
{
	observator->update();
}


class ContorCosCumparaturi :public CosCumparaturiObservator
{

private:

	Service& service;

	QLineEdit* contor;

public:
	 
	void update() override;
	
	ContorCosCumparaturi(Service& service);

};

class ListaCosCumparaturi : public CosCumparaturiObservator
{

private:

	Service& service;

	QListWidget* listaCos;

public:

	void update() override;

	ListaCosCumparaturi(Service& service);

};

class CosCumparaturiWidget : public QWidget
{
	
private:
	vector<CosCumparaturiObservator*> observatori;
	
	void notificaObservatorii()
	{
		for_each(observatori.begin(), observatori.end(), notificaObservator);
	}


	void butonAdaugaApasat();
	void butonGolesteApasat();
	void butonExportApasat();

	void creeazaConexiuni();


public:

	Service& service;

	QPushButton* adaugaInCos;
	QPushButton* golesteCos;
	QPushButton* exportInFisier;

	void adaugaObservator(CosCumparaturiObservator* observator)
	{
		observatori.push_back(observator);
	}

	CosCumparaturiWidget(Service& service, QWidget* parent = nullptr);

};