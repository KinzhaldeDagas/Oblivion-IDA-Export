struct IAudioClientVtbl
{
HRESULT_0 (*QueryInterface)(IAudioClient_0 *, const IID *const, void **);
ULONG (*AddRef)(IAudioClient_0 *);
ULONG (*Release)(IAudioClient_0 *);
HRESULT_0 (*Initialize)(IAudioClient_0 *, AUDCLNT_SHAREMODE, DWORD, REFERENCE_TIME, REFERENCE_TIME, const WAVEFORMATEX *, LPCGUID);
HRESULT_0 (*GetBufferSize)(IAudioClient_0 *, UINT32 *);
HRESULT_0 (*GetStreamLatency)(IAudioClient_0 *, REFERENCE_TIME *);
HRESULT_0 (*GetCurrentPadding)(IAudioClient_0 *, UINT32 *);
HRESULT_0 (*IsFormatSupported)(IAudioClient_0 *, AUDCLNT_SHAREMODE, const WAVEFORMATEX *, WAVEFORMATEX **);
HRESULT_0 (*GetMixFormat)(IAudioClient_0 *, WAVEFORMATEX **);
HRESULT_0 (*GetDevicePeriod)(IAudioClient_0 *, REFERENCE_TIME *, REFERENCE_TIME *);
HRESULT_0 (*Start)(IAudioClient_0 *);
HRESULT_0 (*Stop)(IAudioClient_0 *);
HRESULT_0 (*Reset)(IAudioClient_0 *);
HRESULT_0 (*SetEventHandle)(IAudioClient_0 *, HANDLE);
HRESULT_0 (*GetService)(IAudioClient_0 *, const IID *const, void **);
};
