struct IAudioRenderClientVtbl
{
HRESULT_0 (*QueryInterface)(IAudioRenderClient_0 *, const IID *const, void **);
ULONG (*AddRef)(IAudioRenderClient_0 *);
ULONG (*Release)(IAudioRenderClient_0 *);
HRESULT_0 (*GetBuffer)(IAudioRenderClient_0 *, UINT32, BYTE **);
HRESULT_0 (*ReleaseBuffer)(IAudioRenderClient_0 *, UINT32, DWORD);
};
