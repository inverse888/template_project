#include <QtTest>
#include <QApplication>

#include "mainwindow.h"

class TestMainWindow : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_windowIsVisible();
    void test_windowTitle();

private:
    MainWindow *window = nullptr;
};

void TestMainWindow::initTestCase()
{
    window = new MainWindow();
    window->show();
    QVERIFY(window != nullptr);
}

void TestMainWindow::cleanupTestCase()
{
    delete window;
    window = nullptr;
}

void TestMainWindow::test_windowIsVisible()
{
    QVERIFY(window->isVisible());
}

void TestMainWindow::test_windowTitle()
{
    QCOMPARE(window->windowTitle(), QString("MainWindow"));
}

QTEST_MAIN(TestMainWindow)
#include "tsta_check_gui.moc"
