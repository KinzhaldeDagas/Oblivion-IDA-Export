struct IAudioSessionEventsVtbl
{
HRESULT_0 (*QueryInterface)(IAudioSessionEvents_0 *, const IID *const, void **);
ULONG (*AddRef)(IAudioSessionEvents_0 *);
ULONG (*Release)(IAudioSessionEvents_0 *);
HRESULT_0 (*OnDisplayNameChanged)(IAudioSessionEvents_0 *, LPCWSTR, LPCGUID);
HRESULT_0 (*OnIconPathChanged)(IAudioSessionEvents_0 *, LPCWSTR, LPCGUID);
HRESULT_0 (*OnSimpleVolumeChanged)(IAudioSessionEvents_0 *, float, BOOL, LPCGUID);
HRESULT_0 (*OnChannelVolumeChanged)(IAudioSessionEvents_0 *, DWORD, float *, DWORD, LPCGUID);
HRESULT_0 (*OnGroupingParamChanged)(IAudioSessionEvents_0 *, LPCGUID, LPCGUID);
HRESULT_0 (*OnStateChanged)(IAudioSessionEvents_0 *, AudioSessionState);
HRESULT_0 (*OnSessionDisconnected)(IAudioSessionEvents_0 *, AudioSessionDisconnectReason_0);
};
