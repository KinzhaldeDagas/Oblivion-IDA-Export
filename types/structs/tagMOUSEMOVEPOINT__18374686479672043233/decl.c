struct tagMOUSEMOVEPOINT
{
int x;
int y;
DWORD time;
__declspec(align(8)) ULONG_PTR dwExtraInfo;
};
