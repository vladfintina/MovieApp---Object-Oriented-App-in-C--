#include "mainActivityWidget.h"
#include <qmessagebox.h>


MainActivityWidget::MainActivityWidget(QWidget* parent) : QWidget(parent)
{
	this->listaFilmeWidget = new QListWidget;
	this->basicOperationsWidget = new BasicOperationsWidget(service);
	this->getSortFiltruWidget = new GetSortFiltruWidget(service);
	this->contorCos = new ContorCosCumparaturi(service);
	this->listaCos = new ListaCosCumparaturi(service);
	this->cosCumparaturiWidget = new CosCumparaturiWidget(service);
	cosCumparaturiWidget->adaugaObservator(contorCos);
	cosCumparaturiWidget->adaugaObservator(listaCos);
	

	QVBoxLayout* verticalLayout = new QVBoxLayout();
	verticalLayout->addWidget(basicOperationsWidget);
	verticalLayout->addWidget(getSortFiltruWidget);
	QWidget* operatiiFilmWidget = new QWidget;
	operatiiFilmWidget->setLayout(verticalLayout);


	QHBoxLayout* horizontalLayout = new QHBoxLayout();
	horizontalLayout->addWidget(listaFilmeWidget);
	horizontalLayout->addWidget(operatiiFilmWidget);
	QWidget* filmWidget = new QWidget;
	filmWidget->setLayout(horizontalLayout);

	QVBoxLayout* operatiiCosLayout = new QVBoxLayout();
	operatiiCosLayout->addWidget(contorCos);
	operatiiCosLayout->addWidget(cosCumparaturiWidget);
	QWidget* operatiiCosWidget = new QWidget;
	operatiiCosWidget->setLayout(operatiiCosLayout);

	QHBoxLayout* cosCumparaturiLayout = new QHBoxLayout();
	cosCumparaturiLayout->addWidget(listaCos);
	cosCumparaturiLayout->addWidget(operatiiCosWidget);
	QWidget* cosWidget = new QWidget;
	cosWidget->setLayout(cosCumparaturiLayout);

	QVBoxLayout* mainWindowLayout = new QVBoxLayout;
	mainWindowLayout->addWidget(filmWidget);
	mainWindowLayout->addWidget(cosWidget);

	this->setLayout(mainWindowLayout);

	this->creeazaConexiuni();
	this->updateCasutaFilme(service.getToateFilmele());
}

void MainActivityWidget::conecteazaListaFilmeCuInputFilme()
{
	QWidget::connect(this->listaFilmeWidget, &QListWidget::itemSelectionChanged, [&]() {

		if (this->listaFilmeWidget->selectedItems().isEmpty())
		{
			this->basicOperationsWidget->inputFilmeWidget->getLinieTitlu()->setText("");
			this->basicOperationsWidget->inputFilmeWidget->getLinieGen()->setText("");
			this->basicOperationsWidget->inputFilmeWidget->getLinieAnAparitie()->setValue(0);
			this->basicOperationsWidget->inputFilmeWidget->getLinieActorPrincipal()->setText("");
			return;
		}
		QListWidgetItem* item = this->listaFilmeWidget->selectedItems().at(0);
		QList filmSeparat = item->text().split(',');
		this->basicOperationsWidget->inputFilmeWidget->getLinieTitlu()->setText(filmSeparat.at(0));
		this->basicOperationsWidget->inputFilmeWidget->getLinieGen()->setText(filmSeparat.at(1));
		this->basicOperationsWidget->inputFilmeWidget->getLinieAnAparitie()->setValue(filmSeparat.at(2).toInt());
		this->basicOperationsWidget->inputFilmeWidget->getLinieActorPrincipal()->setText(filmSeparat.at(3));
		return;
	});
}

void MainActivityWidget::creeazaConexiuni()
{
	QWidget::connect(basicOperationsWidget, &BasicOperationsWidget::actiuneCuSucces, [&]() {
			
		QString mesaj{ "Actiune efectuata cu succes" };
		QMessageBox::information(this, "Actiune", mesaj);

	});

	QWidget::connect(getSortFiltruWidget, &GetSortFiltruWidget::butonApasat, [&](const vector<Film>& lista_filme) {

		updateCasutaFilme(lista_filme);

	});

	this->conecteazaListaFilmeCuInputFilme();
}

void MainActivityWidget::updateCasutaFilme(const vector<Film> listaFilme)
{
	this->listaFilmeWidget->clear();

	for (auto const& film : listaFilme)
	{
		QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(film.toString()));
		this->listaFilmeWidget->addItem(item);
	}
}