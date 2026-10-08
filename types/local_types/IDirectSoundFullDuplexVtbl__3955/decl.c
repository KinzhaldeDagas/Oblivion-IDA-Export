struct IDirectSoundFullDuplexVtbl
{
HRESULT_0 (*QueryInterface)(IDirectSoundFullDuplex_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IDirectSoundFullDuplex_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IDirectSoundFullDuplex_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*Initialize)(IDirectSoundFullDuplex_0 *, LPCGUID, LPCGUID, LPCDSCBUFFERDESC, LPCDSBUFFERDESC, HWND, DWORD, LPLPDIRECTSOUNDCAPTUREBUFFER8, LPLPDIRECTSOUNDBUFFER8) __offset(OFF64|AUTO);
};
