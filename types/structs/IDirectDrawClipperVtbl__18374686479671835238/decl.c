struct IDirectDrawClipperVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectDrawClipper *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectDrawClipper *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectDrawClipper *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetClipList)(IDirectDrawClipper *This, LPRECT, LPRGNDATA, LPDWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetHWnd)(IDirectDrawClipper *This, HWND *) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirectDrawClipper *This, LPDIRECTDRAW, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *IsClipListChanged)(IDirectDrawClipper *This, BOOL *) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetClipList)(IDirectDrawClipper *This, LPRGNDATA, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetHWnd)(IDirectDrawClipper *This, DWORD, HWND) __offset(OFF64|AUTO);
};
