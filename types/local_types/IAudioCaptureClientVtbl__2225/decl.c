struct IAudioCaptureClientVtbl
{
HRESULT_0 (*QueryInterface)(IAudioCaptureClient_0 *, const IID *const, void **);
ULONG (*AddRef)(IAudioCaptureClient_0 *);
ULONG (*Release)(IAudioCaptureClient_0 *);
HRESULT_0 (*GetBuffer)(IAudioCaptureClient_0 *, BYTE **, UINT32 *, DWORD *, UINT64 *, UINT64 *);
HRESULT_0 (*ReleaseBuffer)(IAudioCaptureClient_0 *, UINT32);
HRESULT_0 (*GetNextPacketSize)(IAudioCaptureClient_0 *, UINT32 *);
};
