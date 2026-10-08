struct ISimpleAudioVolumeVtbl
{
HRESULT_0 (*QueryInterface)(ISimpleAudioVolume_0 *, const IID *const, void **);
ULONG (*AddRef)(ISimpleAudioVolume_0 *);
ULONG (*Release)(ISimpleAudioVolume_0 *);
HRESULT_0 (*SetMasterVolume)(ISimpleAudioVolume_0 *, float, LPCGUID);
HRESULT_0 (*GetMasterVolume)(ISimpleAudioVolume_0 *, float *);
HRESULT_0 (*SetMute)(ISimpleAudioVolume_0 *, const BOOL, LPCGUID);
HRESULT_0 (*GetMute)(ISimpleAudioVolume_0 *, BOOL *);
};
