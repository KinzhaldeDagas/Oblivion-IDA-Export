struct IDirectSoundCaptureBuffer8Vtbl
{
HRESULT_0 (*QueryInterface)(IDirectSoundCaptureBuffer8_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IDirectSoundCaptureBuffer8_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IDirectSoundCaptureBuffer8_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetCaps)(IDirectSoundCaptureBuffer8_0 *, LPDSCBCAPS) __offset(OFF64|AUTO);
HRESULT_0 (*GetCurrentPosition)(IDirectSoundCaptureBuffer8_0 *, LPDWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetFormat)(IDirectSoundCaptureBuffer8_0 *, LPWAVEFORMATEX, DWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetStatus)(IDirectSoundCaptureBuffer8_0 *, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Initialize)(IDirectSoundCaptureBuffer8_0 *, LPDIRECTSOUNDCAPTURE, LPCDSCBUFFERDESC) __offset(OFF64|AUTO);
HRESULT_0 (*Lock)(IDirectSoundCaptureBuffer8_0 *, DWORD, DWORD, LPVOID *, LPDWORD, LPVOID *, LPDWORD, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Start)(IDirectSoundCaptureBuffer8_0 *, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Stop)(IDirectSoundCaptureBuffer8_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*Unlock)(IDirectSoundCaptureBuffer8_0 *, LPVOID, DWORD, LPVOID, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetObjectInPath)(IDirectSoundCaptureBuffer8_0 *, const GUID *const, DWORD, const GUID *const, LPVOID *) __offset(OFF64|AUTO);
HRESULT_0 (*GetFXStatus)(IDirectSoundCaptureBuffer8_0 *, DWORD, LPDWORD) __offset(OFF64|AUTO);
};
