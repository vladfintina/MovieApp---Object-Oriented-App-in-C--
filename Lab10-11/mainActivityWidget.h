#pragma once
#include <qlistwidget.h>
#include "basicOperationsWidget.h"
#include "getSortFiltruWidget.h"
#include "cosCumparaturiWidget.h"

class MainActivityWidget : public QWidget
{
	
private:

	Repository repository;
	FileRepository fileRepository{ "fisierDate.txt" };
	RepositoryProbabilitate repositoryProbabilitate{ (float)1 };
	Service service{ fileRepository };

	QListWidget* listaFilmeWidget;
	BasicOperationsWidget* basicOperationsWidget;
	GetSortFiltruWidget* getSortFiltruWidget;
	ContorCosCumparaturi* contorCos;
	ListaCosCumparaturi* listaCos;
	CosCumparaturiWidget* cosCumparaturiWidget;


	void conecteazaListaFilmeCuInputFilme();
	void creeazaConexiuni();
	void updateCasutaFilme(const vector<Film> listaFilme);

public:

	MainActivityWidget(QWidget* parent = nullptr);


};