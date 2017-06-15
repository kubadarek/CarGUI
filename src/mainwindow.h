#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListView>

/**
 * @brief The MainWindow class
 *
 * The start screen class.
 */
class MainWindow: public QMainWindow
{
    Q_OBJECT

private:
    /// The list of cars that
    QListView carsList;


};

#endif // MAINWINDOW_H
