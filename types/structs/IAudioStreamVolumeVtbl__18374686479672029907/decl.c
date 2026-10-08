struct IAudioStreamVolumeVtbl
{
HRESULT_0 (*QueryInterface)(IAudioStreamVolume_0 *, const IID *const, void **);
ULONG (*AddRef)(IAudioStreamVolume_0 *);
ULONG (*Release)(IAudioStreamVolume_0 *);
HRESULT_0 (*GetChannelCount)(IAudioStreamVolume_0 *, UINT32 *);
HRESULT_0 (*SetChannelVolume)(IAudioStreamVolume_0 *, UINT32, const float);
HRESULT_0 (*GetChannelVolume)(IAudioStreamVolume_0 *, UINT32, float *);
HRESULT_0 (*SetAllVolumes)(IAudioStreamVolume_0 *, UINT32, const float *);
HRESULT_0 (*GetAllVolumes)(IAudioStreamVolume_0 *, UINT32, float *);
};
