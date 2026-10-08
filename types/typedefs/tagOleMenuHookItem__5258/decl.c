struct tagOleMenuHookItem
{
DWORD tid;
HANDLE hHeap;
HHOOK GetMsg_hHook;
HHOOK CallWndProc_hHook;
tagOleMenuHookItem *next;
};
