struct IBasicAudioVtbl
{
HRESULT (__stdcall *QueryInterface)(IBasicAudio *This, const IID *const riid, LPVOID *ppvObj);
ULONG (__stdcall *AddRef)(IBasicAudio *This);
ULONG (__stdcall *Release)(IBasicAudio *This);
HRESULT (__stdcall *GetTypeInfoCount)(IBasicAudio *This, UINT *pctinfo);
HRESULT (__stdcall *GetTypeInfo)(IBasicAudio *This, UINT itinfo, LCID lcid, ITypeInfo **pptinfo);
HRESULT (__stdcall *GetIDsOfNames)(IBasicAudio *This, const IID *const riid, OLECHAR **rgszNames, UINT cNames, LCID lcid, DISPID *rgdispid);
HRESULT (__stdcall *Invoke)(IBasicAudio *This, DISPID dispidMember, const IID *const riid, LCID lcid, WORD wFlags, DISPPARAMS *pdispparams, VARIANT *pvarResult, EXCEPINFO *pexcepinfo, UINT *puArgErr);
HRESULT (__stdcall *put_Volume)(IBasicAudio *This, int lVolume);
HRESULT (__stdcall *get_Volume)(IBasicAudio *This, int *plVolume);
HRESULT (__stdcall *put_Balance)(IBasicAudio *This, int lBalance);
HRESULT (__stdcall *get_Balance)(IBasicAudio *This, int *plBalance);
};
