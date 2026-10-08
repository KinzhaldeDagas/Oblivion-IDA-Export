struct tagWDML_XACT
{
tagWDML_XACT *next;
DWORD xActID;
UINT ddeMsg;
HDDEDATA hDdeData;
DWORD dwTimeout;
DWORD hUser;
UINT wType;
UINT wFmt;
HSZ hszItem;
ATOM atom;
HGLOBAL hMem;
LPARAM_0 lParam;
};
