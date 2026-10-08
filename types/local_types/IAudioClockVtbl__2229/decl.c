struct IAudioClockVtbl
{
HRESULT_0 (*QueryInterface)(IAudioClock_0 *, const IID *const, void **);
ULONG (*AddRef)(IAudioClock_0 *);
ULONG (*Release)(IAudioClock_0 *);
HRESULT_0 (*GetFrequency)(IAudioClock_0 *, UINT64 *);
HRESULT_0 (*GetPosition)(IAudioClock_0 *, UINT64 *, UINT64 *);
HRESULT_0 (*GetCharacteristics)(IAudioClock_0 *, DWORD *);
};
