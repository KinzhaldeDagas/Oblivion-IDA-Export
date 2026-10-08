struct _SERVICE_NOTIFY_STATUS_CHANGE_PARAMS_2
{
ULONGLONG ullThreadId;
DWORD dwNotifyMask;
UCHAR CallbackAddressArray[16];
UCHAR CallbackParamAddressArray[16];
SERVICE_STATUS_PROCESS ServiceStatus;
DWORD dwNotificationStatus;
DWORD dwSequence;
DWORD dwNotificationTriggered;
LPWSTR pszServiceNames;
};
