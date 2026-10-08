struct _SERVICE_NOTIFY_2W
{
DWORD dwVersion;
PFN_SC_NOTIFY_CALLBACK pfnNotifyCallback;
void *pContext;
DWORD dwNotificationStatus;
SERVICE_STATUS_PROCESS ServiceStatus;
DWORD dwNotificationTriggered;
WCHAR_0 *pszServiceNames;
};
