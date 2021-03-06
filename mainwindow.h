#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "papermodel.h"

namespace Ui {

class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

protected:

private slots:
	void penColor();
	void penWidth();
	void about();

	void on_actionDraw_triggered();
	void on_actionText_triggered();
	void on_actionSelect_triggered();

	void on_actionSave_triggered();

private:
	PaperModel paperModel;
	Paper *paper;
	QRectF getScreenSize();
	void setWindowSize();

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
