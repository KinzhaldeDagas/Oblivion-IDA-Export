struct __declspec(align(8)) tagWDML_CONV
{
tagWDML_CONV *next;
tagWDML_INSTANCE *instance;
HSZ hszService;
HSZ hszTopic;
UINT magic;
UINT afCmd;
CONVCONTEXT convContext;
HWND hwndClient;
HWND hwndServer;
WDML_XACT *transactions;
DWORD hUser;
DWORD wStatus;
DWORD wConvst;
};
