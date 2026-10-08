struct IDirectDrawGammaControlVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectDrawGammaControl *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectDrawGammaControl *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectDrawGammaControl *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetGammaRamp)(IDirectDrawGammaControl *This, DWORD, LPDDGAMMARAMP) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetGammaRamp)(IDirectDrawGammaControl *This, DWORD, LPDDGAMMARAMP) __offset(OFF64|AUTO);
};
