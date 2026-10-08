struct IOleObjectVtbl
{
HRESULT_0 (*QueryInterface)(IOleObject_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleObject_0 *);
ULONG (*Release)(IOleObject_0 *);
HRESULT_0 (*SetClientSite)(IOleObject_0 *, IOleClientSite_0 *);
HRESULT_0 (*GetClientSite)(IOleObject_0 *, IOleClientSite_0 **);
HRESULT_0 (*SetHostNames)(IOleObject_0 *, LPCOLESTR, LPCOLESTR);
HRESULT_0 (*Close)(IOleObject_0 *, DWORD);
HRESULT_0 (*SetMoniker)(IOleObject_0 *, DWORD, IMoniker_0 *);
HRESULT_0 (*GetMoniker)(IOleObject_0 *, DWORD, DWORD, IMoniker_0 **);
HRESULT_0 (*InitFromData)(IOleObject_0 *, IDataObject_0 *, BOOL, DWORD);
HRESULT_0 (*GetClipboardData)(IOleObject_0 *, DWORD, IDataObject_0 **);
HRESULT_0 (*DoVerb)(IOleObject_0 *, LONG, LPMSG, IOleClientSite_0 *, LONG, HWND, LPCRECT);
HRESULT_0 (*EnumVerbs)(IOleObject_0 *, IEnumOLEVERB_0 **);
HRESULT_0 (*Update)(IOleObject_0 *);
HRESULT_0 (*IsUpToDate)(IOleObject_0 *);
HRESULT_0 (*GetUserClassID)(IOleObject_0 *, CLSID *);
HRESULT_0 (*GetUserType)(IOleObject_0 *, DWORD, LPOLESTR *);
HRESULT_0 (*SetExtent)(IOleObject_0 *, DWORD, SIZEL *);
HRESULT_0 (*GetExtent)(IOleObject_0 *, DWORD, SIZEL *);
HRESULT_0 (*Advise)(IOleObject_0 *, IAdviseSink_0 *, DWORD *);
HRESULT_0 (*Unadvise)(IOleObject_0 *, DWORD);
HRESULT_0 (*EnumAdvise)(IOleObject_0 *, IEnumSTATDATA_0 **);
HRESULT_0 (*GetMiscStatus)(IOleObject_0 *, DWORD, DWORD *);
HRESULT_0 (*SetColorScheme)(IOleObject_0 *, LOGPALETTE *);
};
