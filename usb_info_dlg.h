#pragma once

#include <QtWidgets/QDialog>
#include "ui_usb_info_dlg.h"
#include "common/usb_common.h"

class UsbInfoDlg : public QDialog {
    Q_OBJECT

  private:
    USBRESULT GetUSBAuthInfos(USB_VECTOR *local_devices_datasource);

  public:
    UsbInfoDlg(QWidget *parent = Q_NULLPTR);

  private:
    Ui::UsbInfoDlgClass ui;
};
