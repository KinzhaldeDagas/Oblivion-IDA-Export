struct tagWINE_MLD
{
UINT uDeviceID;
UINT type;
UINT mmdIndex;
__declspec(align(8)) DWORD_PTR dwDriverInstance;
WORD dwFlags;
__declspec(align(8)) DWORD_PTR dwCallback;
DWORD_PTR dwClientInstance;
};
