struct _SERVICE_INFOW
{
LPGUID lpServiceType;
LPWSTR lpServiceName;
LPWSTR lpComment;
LPWSTR lpLocale;
DWORD dwDisplayHint;
DWORD dwVersion;
DWORD dwTime;
LPSTR lpMachineName;
LPSERVICE_ADDRESSES lpServiceAddress;
BLOB_0 ServiceSpecificInfo;
};
