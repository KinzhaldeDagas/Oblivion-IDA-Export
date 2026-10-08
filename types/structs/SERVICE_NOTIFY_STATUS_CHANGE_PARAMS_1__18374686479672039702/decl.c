struct _SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_1
{
ULONGLONG ullThreadId;
DWORD dwNotifyMask;
UCHAR CallbackAddressArray[16];
UCHAR CallbackParamAddressArray[16];
SERVICE_STATUS_PROCESS ServiceStatus;
DWORD dwNotificationStatus;
DWORD dwSequence;
};
