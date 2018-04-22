#include "stdafx.h"
#include "usb_info_dlg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UsbInfoDlg w;
    w.show();
    return a.exec();
}
