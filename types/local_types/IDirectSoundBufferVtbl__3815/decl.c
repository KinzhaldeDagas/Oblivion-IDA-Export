struct IDirectSoundBufferVtbl
{
HRESULT_0 (*QueryInterface)(IDirectSoundBuffer_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IDirectSoundBuffer_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IDirectSoundBuffer_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetCaps)(IDirectSoundBuffer_0 *, LPDSBCAPS) __offset(OFF64|AUTO);
HRESULT_0 (*GetCurrentPosition)(IDirectSoundBuffer_0 *, LPDWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetFormat)(IDirectSoundBuffer_0 *, LPWAVEFORMATEX, DWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetVolume)(IDirectSoundBuffer_0 *, LPLONG) __offset(OFF64|AUTO);
HRESULT_0 (*GetPan)(IDirectSoundBuffer_0 *, LPLONG) __offset(OFF64|AUTO);
HRESULT_0 (*GetFrequency)(IDirectSoundBuffer_0 *, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetStatus)(IDirectSoundBuffer_0 *, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Initialize)(IDirectSoundBuffer_0 *, LPDIRECTSOUND, LPCDSBUFFERDESC) __offset(OFF64|AUTO);
HRESULT_0 (*Lock)(IDirectSoundBuffer_0 *, DWORD, DWORD, LPVOID *, LPDWORD, LPVOID *, LPDWORD, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Play)(IDirectSoundBuffer_0 *, DWORD, DWORD, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetCurrentPosition)(IDirectSoundBuffer_0 *, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*SetFormat)(IDirectSoundBuffer_0 *, LPCWAVEFORMATEX) __offset(OFF64|AUTO);
HRESULT_0 (*SetVolume)(IDirectSoundBuffer_0 *, LONG) __offset(OFF64|AUTO);
HRESULT_0 (*SetPan)(IDirectSoundBuffer_0 *, LONG) __offset(OFF64|AUTO);
HRESULT_0 (*SetFrequency)(IDirectSoundBuffer_0 *, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Stop)(IDirectSoundBuffer_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*Unlock)(IDirectSoundBuffer_0 *, LPVOID, DWORD, LPVOID, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Restore)(IDirectSoundBuffer_0 *) __offset(OFF64|AUTO);
};
