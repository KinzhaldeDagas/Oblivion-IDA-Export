struct IMediaPositionVtbl
{
HRESULT (__stdcall *QueryInterface)(IMediaPosition *This, const IID *const riid, LPVOID *ppvObj);
ULONG (__stdcall *AddRef)(IMediaPosition *This);
ULONG (__stdcall *Release)(IMediaPosition *This);
HRESULT (__stdcall *GetTypeInfoCount)(IMediaPosition *This, UINT *pctinfo);
HRESULT (__stdcall *GetTypeInfo)(IMediaPosition *This, UINT itinfo, LCID lcid, ITypeInfo **pptinfo);
HRESULT (__stdcall *GetIDsOfNames)(IMediaPosition *This, const IID *const riid, OLECHAR **rgszNames, UINT cNames, LCID lcid, DISPID *rgdispid);
HRESULT (__stdcall *Invoke)(IMediaPosition *This, DISPID dispidMember, const IID *const riid, LCID lcid, WORD wFlags, DISPPARAMS *pdispparams, VARIANT *pvarResult, EXCEPINFO *pexcepinfo, UINT *puArgErr);
HRESULT (__stdcall *get_Duration)(IMediaPosition *This, REFTIME *plength);
HRESULT (__stdcall *put_CurrentPosition)(IMediaPosition *This, REFTIME llTime);
HRESULT (__stdcall *get_CurrentPosition)(IMediaPosition *This, REFTIME *pllTime);
HRESULT (__stdcall *get_StopTime)(IMediaPosition *This, REFTIME *pllTime);
HRESULT (__stdcall *put_StopTime)(IMediaPosition *This, REFTIME llTime);
HRESULT (__stdcall *get_PrerollTime)(IMediaPosition *This, REFTIME *pllTime);
HRESULT (__stdcall *put_PrerollTime)(IMediaPosition *This, REFTIME llTime);
HRESULT (__stdcall *put_Rate)(IMediaPosition *This, double dRate);
HRESULT (__stdcall *get_Rate)(IMediaPosition *This, double *pdRate);
HRESULT (__stdcall *CanSeekForward)(IMediaPosition *This, int *pCanSeekForward);
HRESULT (__stdcall *CanSeekBackward)(IMediaPosition *This, int *pCanSeekBackward);
};
