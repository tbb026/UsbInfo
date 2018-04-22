#pragma once
#include <winnt.h>

enum USBRESULT {
    USB_SUCCESS,
    USB_ERROR
};

typedef struct {
    int64_t vid;
    int64_t pid;
    bool readonly;
    WCHAR seriesnumber;
} USB_AUTH_INFO;

typedef struct {
    USB_AUTH_INFO auth_info;
    bool is_local;
    bool is_global;
} USB_AUTH_INFO_VIEW_MODEL;

typedef std::vector<USB_AUTH_INFO_VIEW_MODEL> USB_VECTOR;
typedef std::vector<USB_AUTH_INFO_VIEW_MODEL *> USB_POINTER_VECTOR;