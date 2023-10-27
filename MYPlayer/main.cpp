#include <QCoreApplication>
#include <qquickwindow.h>
#include "MainApp.h"

//继承 MainApp的类 用于存储Main的内容
extern MainApp* g_pApp;


int main(int argc, char *argv[])
{
    QQuickWindow::setSceneGraphBackend(QSGRendererInterface::Software); // QT BUG硬件渲染出现了问题, 需要开启软件渲染
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    MainApp app(argc, argv);

//    存储Main的类
    g_pApp = &app;
//    单例模式 存完了就设置 app
    int nRet = app.Main(argc, argv);
    g_pApp = nullptr;

    return nRet;
}
