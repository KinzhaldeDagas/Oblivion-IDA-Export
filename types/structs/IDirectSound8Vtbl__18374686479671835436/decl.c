struct IDirectSound8Vtbl
{
HRESULT_0 (*QueryInterface)(IDirectSound8_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IDirectSound8_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IDirectSound8_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*CreateSoundBuffer)(IDirectSound8_0 *, LPCDSBUFFERDESC, LPLPDIRECTSOUNDBUFFER, IUnknown_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetCaps)(IDirectSound8_0 *, LPDSCAPS) __offset(OFF64|AUTO);
HRESULT_0 (*DuplicateSoundBuffer)(IDirectSound8_0 *, LPDIRECTSOUNDBUFFER, LPLPDIRECTSOUNDBUFFER) __offset(OFF64|AUTO);
HRESULT_0 (*SetCooperativeLevel)(IDirectSound8_0 *, HWND, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Compact)(IDirectSound8_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetSpeakerConfig)(IDirectSound8_0 *, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetSpeakerConfig)(IDirectSound8_0 *, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Initialize)(IDirectSound8_0 *, LPCGUID) __offset(OFF64|AUTO);
HRESULT_0 (*VerifyCertification)(IDirectSound8_0 *, LPDWORD) __offset(OFF64|AUTO);
};
