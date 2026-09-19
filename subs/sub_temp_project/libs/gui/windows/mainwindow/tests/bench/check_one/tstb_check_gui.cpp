#include <QtTest>
#include <QApplication>

#include "mainwindow.h"

class BenchMainWindow : public QObject
{
    Q_OBJECT

private slots:
    void bench_construction();
    void bench_show();
};

void BenchMainWindow::bench_construction()
{
    QBENCHMARK {
        MainWindow w;
    }
}

void BenchMainWindow::bench_show()
{
    MainWindow w;
    QBENCHMARK {
        w.show();
        w.hide();
    }
}

QTEST_MAIN(BenchMainWindow)
#include "tstb_check_gui.moc"
