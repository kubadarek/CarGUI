#include <QString>
#include <QtTest>

class CarGUITest : public QObject
{
    Q_OBJECT

public:
    CarGUITest();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCaseMain();
};

CarGUITest::CarGUITest()
{
}

void CarGUITest::initTestCase()
{
}

void CarGUITest::cleanupTestCase()
{
}

void CarGUITest::testCaseMain()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(CarGUITest)

#include "tst_carguitest.moc"
