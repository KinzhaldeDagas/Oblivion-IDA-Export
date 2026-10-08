struct _WINMM_OpenInfo
{
HWAVE handle;
UINT req_device;
WAVEFORMATEX *format;
DWORD_PTR callback;
DWORD_PTR cb_user;
DWORD flags;
BOOL reset;
};
