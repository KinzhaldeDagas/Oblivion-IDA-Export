struct IDirectDrawColorControlVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectDrawColorControl *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectDrawColorControl *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectDrawColorControl *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetColorControls)(IDirectDrawColorControl *This, LPDDCOLORCONTROL) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetColorControls)(IDirectDrawColorControl *This, LPDDCOLORCONTROL) __offset(OFF64|AUTO);
};
