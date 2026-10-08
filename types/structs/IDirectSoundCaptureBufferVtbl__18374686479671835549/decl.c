struct IDirectSoundCaptureBufferVtbl
{
HRESULT_0 (*QueryInterface)(IDirectSoundCaptureBuffer_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IDirectSoundCaptureBuffer_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IDirectSoundCaptureBuffer_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetCaps)(IDirectSoundCaptureBuffer_0 *, LPDSCBCAPS) __offset(OFF64|AUTO);
HRESULT_0 (*GetCurrentPosition)(IDirectSoundCaptureBuffer_0 *, LPDWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetFormat)(IDirectSoundCaptureBuffer_0 *, LPWAVEFORMATEX, DWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*GetStatus)(IDirectSoundCaptureBuffer_0 *, LPDWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Initialize)(IDirectSoundCaptureBuffer_0 *, LPDIRECTSOUNDCAPTURE, LPCDSCBUFFERDESC) __offset(OFF64|AUTO);
HRESULT_0 (*Lock)(IDirectSoundCaptureBuffer_0 *, DWORD, DWORD, LPVOID *, LPDWORD, LPVOID *, LPDWORD, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Start)(IDirectSoundCaptureBuffer_0 *, DWORD) __offset(OFF64|AUTO);
HRESULT_0 (*Stop)(IDirectSoundCaptureBuffer_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*Unlock)(IDirectSoundCaptureBuffer_0 *, LPVOID, DWORD, LPVOID, DWORD) __offset(OFF64|AUTO);
};
