struct __declspec(align(8)) tagInputContextData
{
DWORD dwLock;
INPUTCONTEXT IMC;
DWORD threadID;
ImmHkl *immKbd;
UINT lastVK;
BOOL threadDefault;
DWORD magic;
};
