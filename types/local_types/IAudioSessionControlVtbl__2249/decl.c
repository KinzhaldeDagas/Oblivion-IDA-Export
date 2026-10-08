struct IAudioSessionControlVtbl
{
HRESULT_0 (*QueryInterface)(IAudioSessionControl_0 *, const IID *const, void **);
ULONG (*AddRef)(IAudioSessionControl_0 *);
ULONG (*Release)(IAudioSessionControl_0 *);
HRESULT_0 (*GetState)(IAudioSessionControl_0 *, AudioSessionState *);
HRESULT_0 (*GetDisplayName)(IAudioSessionControl_0 *, LPWSTR *);
HRESULT_0 (*SetDisplayName)(IAudioSessionControl_0 *, LPCWSTR, LPCGUID);
HRESULT_0 (*GetIconPath)(IAudioSessionControl_0 *, LPWSTR *);
HRESULT_0 (*SetIconPath)(IAudioSessionControl_0 *, LPCWSTR, LPCGUID);
HRESULT_0 (*GetGroupingParam)(IAudioSessionControl_0 *, GUID *);
HRESULT_0 (*SetGroupingParam)(IAudioSessionControl_0 *, LPCGUID, LPCGUID);
HRESULT_0 (*RegisterAudioSessionNotification)(IAudioSessionControl_0 *, IAudioSessionEvents_0 *);
HRESULT_0 (*UnregisterAudioSessionNotification)(IAudioSessionControl_0 *, IAudioSessionEvents_0 *);
};
