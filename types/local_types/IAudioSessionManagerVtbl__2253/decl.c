struct IAudioSessionManagerVtbl
{
HRESULT_0 (*QueryInterface)(IAudioSessionManager_0 *, const IID *const, void **);
ULONG (*AddRef)(IAudioSessionManager_0 *);
ULONG (*Release)(IAudioSessionManager_0 *);
HRESULT_0 (*GetAudioSessionControl)(IAudioSessionManager_0 *, LPCGUID, DWORD, IAudioSessionControl_0 **);
HRESULT_0 (*GetSimpleAudioVolume)(IAudioSessionManager_0 *, LPCGUID, DWORD, ISimpleAudioVolume_0 **);
};
