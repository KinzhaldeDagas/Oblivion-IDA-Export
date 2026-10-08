struct tagWINE_MCIDRIVER
{
UINT wDeviceID;
UINT wType;
LPWSTR lpstrDeviceType;
LPWSTR lpstrAlias;
HDRVR hDriver;
DWORD_PTR dwPrivate;
YIELDPROC lpfnYieldProc;
DWORD dwYieldData;
DWORD CreatorThread;
UINT uTypeCmdTable;
UINT uSpecificCmdTable;
tagWINE_MCIDRIVER *lpNext;
};
