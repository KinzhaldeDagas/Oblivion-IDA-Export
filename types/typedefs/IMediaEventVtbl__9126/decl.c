struct IMediaEventVtbl
{
HRESULT (__stdcall *QueryInterface)(IMediaEvent *This, const IID *const riid, LPVOID *ppvObj);
ULONG (__stdcall *AddRef)(IMediaEvent *This);
ULONG (__stdcall *Release)(IMediaEvent *This);
HRESULT (__stdcall *GetTypeInfoCount)(IMediaEvent *This, UINT *pctinfo);
HRESULT (__stdcall *GetTypeInfo)(IMediaEvent *This, UINT itinfo, LCID lcid, ITypeInfo **pptinfo);
HRESULT (__stdcall *GetIDsOfNames)(IMediaEvent *This, const IID *const riid, OLECHAR **rgszNames, UINT cNames, LCID lcid, DISPID *rgdispid);
HRESULT (__stdcall *Invoke)(IMediaEvent *This, DISPID dispidMember, const IID *const riid, LCID lcid, WORD wFlags, DISPPARAMS *pdispparams, VARIANT *pvarResult, EXCEPINFO *pexcepinfo, UINT *puArgErr);
HRESULT (__stdcall *GetEventHandle)(IMediaEvent *This, OAEVENT *hEvent);
HRESULT (__stdcall *GetEvent)(IMediaEvent *This, int *lEventCode, int *lParam1, int *lParam2, int msTimeout);
HRESULT (__stdcall *WaitForCompletion)(IMediaEvent *This, int msTimeout, int *pEvCode);
HRESULT (__stdcall *CancelDefaultHandling)(IMediaEvent *This, int lEvCode);
HRESULT (__stdcall *RestoreDefaultHandling)(IMediaEvent *This, int lEvCode);
HRESULT (__stdcall *FreeEventParams)(IMediaEvent *This, int lEvCode, int lParam1, int lParam2);
};
