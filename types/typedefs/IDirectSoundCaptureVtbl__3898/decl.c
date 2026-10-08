struct IDirectSoundCaptureVtbl
{
HRESULT_0 (*QueryInterface)(IDirectSoundCapture_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IDirectSoundCapture_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IDirectSoundCapture_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*CreateCaptureBuffer)(IDirectSoundCapture_0 *, LPCDSCBUFFERDESC, LPDIRECTSOUNDCAPTUREBUFFER *, LPUNKNOWN) __offset(OFF64|AUTO);
HRESULT_0 (*GetCaps)(IDirectSoundCapture_0 *, LPDSCCAPS) __offset(OFF64|AUTO);
HRESULT_0 (*Initialize)(IDirectSoundCapture_0 *, LPCGUID) __offset(OFF64|AUTO);
};
