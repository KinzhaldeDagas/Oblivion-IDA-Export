struct IMessageFilterVtbl
{
HRESULT_0 (*QueryInterface)(IMessageFilter_0 *, const IID *const, void **);
ULONG (*AddRef)(IMessageFilter_0 *);
ULONG (*Release)(IMessageFilter_0 *);
DWORD (*HandleInComingCall)(IMessageFilter_0 *, DWORD, HTASK, DWORD, LPINTERFACEINFO);
DWORD (*RetryRejectedCall)(IMessageFilter_0 *, HTASK, DWORD, DWORD);
DWORD (*MessagePending)(IMessageFilter_0 *, HTASK, DWORD, DWORD);
};
