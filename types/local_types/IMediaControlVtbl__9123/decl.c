struct IMediaControlVtbl
{
HRESULT (__stdcall *QueryInterface)(IMediaControl *This, const IID *const riid, LPVOID *ppvObj);
ULONG (__stdcall *AddRef)(IMediaControl *This);
ULONG (__stdcall *Release)(IMediaControl *This);
HRESULT (__stdcall *GetTypeInfoCount)(IMediaControl *This, UINT *pctinfo);
HRESULT (__stdcall *GetTypeInfo)(IMediaControl *This, UINT itinfo, LCID lcid, ITypeInfo **pptinfo);
HRESULT (__stdcall *GetIDsOfNames)(IMediaControl *This, const IID *const riid, OLECHAR **rgszNames, UINT cNames, LCID lcid, DISPID *rgdispid);
HRESULT (__stdcall *Invoke)(IMediaControl *This, DISPID dispidMember, const IID *const riid, LCID lcid, WORD wFlags, DISPPARAMS *pdispparams, VARIANT *pvarResult, EXCEPINFO *pexcepinfo, UINT *puArgErr);
HRESULT (__stdcall *Run)(IMediaControl *This);
HRESULT (__stdcall *Pause)(IMediaControl *This);
HRESULT (__stdcall *Stop)(IMediaControl *This);
HRESULT (__stdcall *GetState)(IMediaControl *This, int msTimeout, OAFilterState *pfs);
HRESULT (__stdcall *RenderFile)(IMediaControl *This, BSTR strFilename);
HRESULT (__stdcall *AddSourceFilter)(IMediaControl *This, BSTR strFilename, IDispatch **ppUnk);
HRESULT (__stdcall *get_FilterCollection)(IMediaControl *This, IDispatch **ppUnk);
HRESULT (__stdcall *get_RegFilterCollection)(IMediaControl *This, IDispatch **ppUnk);
HRESULT (__stdcall *StopWhenReady)(IMediaControl *This);
};
