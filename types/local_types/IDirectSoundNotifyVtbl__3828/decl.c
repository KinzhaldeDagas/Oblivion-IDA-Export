struct IDirectSoundNotifyVtbl
{
HRESULT_0 (*QueryInterface)(IDirectSoundNotify_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IDirectSoundNotify_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IDirectSoundNotify_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*SetNotificationPositions)(IDirectSoundNotify_0 *, DWORD, LPCDSBPOSITIONNOTIFY) __offset(OFF64|AUTO);
};
