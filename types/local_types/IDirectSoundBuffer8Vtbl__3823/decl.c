struct IDirectSoundBuffer8Vtbl
{
HRESULT_0 (*QueryInterface)(IDirectSoundBuffer8_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IDirectSoundBuffer8_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IDirectSoundBuffer8_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetCaps)(IDirectSoundBuffer8_0 *, LPDSBCAPS) __offset(OFF64|AUTO);
HRESULT_0 (*GetCurrentPosition)(IDirectSoundBuffer8_0 *, LPDWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetFormat)(IDirectSoundBuffer8_0 *, LPWAVEFORMATEX, DWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetVolume)(IDirectSoundBuffer8_0 *, LPLONG) __offset(OFF64|AUTO);
HRESULT_0 (*GetPan)(IDirectSoundBuffer8_0 *, LPLONG) __offset(OFF64|AUTO);
HRESULT_0 (*GetFrequency)(IDirectSoundBuffer8_0 *, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetStatus)(IDirectSoundBuffer8_0 *, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Initialize)(IDirectSoundBuffer8_0 *, LPDIRECTSOUND, LPCDSBUFFERDESC) __offset(OFF64|AUTO);
HRESULT_0 (*Lock)(IDirectSoundBuffer8_0 *, DWORD, DWORD, LPVOID *, LPDWORD, LPVOID *, LPDWORD, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Play)(IDirectSoundBuffer8_0 *, DWORD, DWORD, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetCurrentPosition)(IDirectSoundBuffer8_0 *, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetFormat)(IDirectSoundBuffer8_0 *, LPCWAVEFORMATEX) __offset(OFF64|AUTO);
HRESULT_0 (*SetVolume)(IDirectSoundBuffer8_0 *, LONG) __offset(OFF64|AUTO);
HRESULT_0 (*SetPan)(IDirectSoundBuffer8_0 *, LONG) __offset(OFF64|AUTO);
HRESULT_0 (*SetFrequency)(IDirectSoundBuffer8_0 *, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Stop)(IDirectSoundBuffer8_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*Unlock)(IDirectSoundBuffer8_0 *, LPVOID, DWORD, LPVOID, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Restore)(IDirectSoundBuffer8_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*SetFX)(IDirectSoundBuffer8_0 *, DWORD, LPDSEFFECTDESC, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*AcquireResources)(IDirectSoundBuffer8_0 *, DWORD, DWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetObjectInPath)(IDirectSoundBuffer8_0 *, const GUID *const, DWORD, const GUID *const, LPVOID *) __offset(OFF64|AUTO);
};
