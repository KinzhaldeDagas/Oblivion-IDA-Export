struct IChannelHookVtbl
{
HRESULT_0 (*QueryInterface)(IChannelHook_0 *, const IID *const, void **);
ULONG (*AddRef)(IChannelHook_0 *);
ULONG (*Release)(IChannelHook_0 *);
void (*ClientGetSize)(IChannelHook_0 *, const GUID *const, const IID *const, ULONG *);
void (*ClientFillBuffer)(IChannelHook_0 *, const GUID *const, const IID *const, ULONG *, void *);
void (*ClientNotify)(IChannelHook_0 *, const GUID *const, const IID *const, ULONG, void *, DWORD, HRESULT_0);
void (*ServerNotify)(IChannelHook_0 *, const GUID *const, const IID *const, ULONG, void *, DWORD);
void (*ServerGetSize)(IChannelHook_0 *, const GUID *const, const IID *const, HRESULT_0, ULONG *);
void (*ServerFillBuffer)(IChannelHook_0 *, const GUID *const, const IID *const, ULONG *, void *, HRESULT_0);
};
