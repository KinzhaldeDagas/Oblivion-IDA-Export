struct _SERVICE_INFOA
{
LPGUID lpServiceType;
LPSTR lpServiceName;
LPSTR lpComment;
LPSTR lpLocale;
DWORD dwDisplayHint;
DWORD dwVersion;
DWORD dwTime;
LPSTR lpMachineName;
LPSERVICE_ADDRESSES lpServiceAddress;
BLOB_0 ServiceSpecificInfo;
};
