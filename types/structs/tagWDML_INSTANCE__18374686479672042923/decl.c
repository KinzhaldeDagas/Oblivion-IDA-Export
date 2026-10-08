struct tagWDML_INSTANCE
{
tagWDML_INSTANCE *next;
DWORD instanceID;
DWORD threadID;
BOOL monitor;
BOOL clientOnly;
BOOL unicode;
HSZNode *nodeList;
PFNCALLBACK callback;
DWORD CBFflags;
DWORD monitorFlags;
DWORD lastError;
HWND hwndEvent;
DWORD wStatus;
WDML_SERVER *servers;
WDML_CONV *convs[2];
WDML_LINK *links[2];
};
