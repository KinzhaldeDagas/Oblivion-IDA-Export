struct IDirectSoundVtbl
{
HRESULT_0 (*QueryInterface)(IDirectSound_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IDirectSound_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IDirectSound_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*CreateSoundBuffer)(IDirectSound_0 *, LPCDSBUFFERDESC, LPLPDIRECTSOUNDBUFFER, IUnknown_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetCaps)(IDirectSound_0 *, LPDSCAPS) __offset(OFF64|AUTO);
HRESULT_0 (*DuplicateSoundBuffer)(IDirectSound_0 *, LPDIRECTSOUNDBUFFER, LPLPDIRECTSOUNDBUFFER) __offset(OFF64|AUTO);
HRESULT_0 (*SetCooperativeLevel)(IDirectSound_0 *, HWND, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Compact)(IDirectSound_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetSpeakerConfig)(IDirectSound_0 *, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetSpeakerConfig)(IDirectSound_0 *, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Initialize)(IDirectSound_0 *, LPCGUID) __offset(OFF64|AUTO);
};
