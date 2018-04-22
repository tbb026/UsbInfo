#include "stdafx.h"
#include "usb_info_dlg.h"

UsbInfoDlg::UsbInfoDlg(QWidget *parent)
    : QDialog(parent) {
    ui.setupUi(this);
}

USBRESULT UsbInfoDlg::GetUSBAuthInfos(USB_VECTOR *local_devices_datasource) {
    USBRESULT result = USB_ERROR;

    for (int i = 0; i < 10; ++i) {
        USB_AUTH_INFO_VIEW_MODEL model = { 0 };
        model.auth_info.vid = i;
        for (int j = 0; j < 10; ++j) {
            model.auth_info.pid = j;
        }

        model.is_local = true;
        local_devices_datasource->push_back(model);
    }

    return result;
}


