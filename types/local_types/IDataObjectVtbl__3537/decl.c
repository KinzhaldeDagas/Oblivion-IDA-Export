struct IDataObjectVtbl
{
HRESULT_0 (*QueryInterface)(IDataObject_0 *, const IID *const, void **);
ULONG (*AddRef)(IDataObject_0 *);
ULONG (*Release)(IDataObject_0 *);
HRESULT_0 (*GetData)(IDataObject_0 *, FORMATETC *, STGMEDIUM *);
HRESULT_0 (*GetDataHere)(IDataObject_0 *, FORMATETC *, STGMEDIUM *);
HRESULT_0 (*QueryGetData)(IDataObject_0 *, FORMATETC *);
HRESULT_0 (*GetCanonicalFormatEtc)(IDataObject_0 *, FORMATETC *, FORMATETC *);
HRESULT_0 (*SetData)(IDataObject_0 *, FORMATETC *, STGMEDIUM *, BOOL);
HRESULT_0 (*EnumFormatEtc)(IDataObject_0 *, DWORD, IEnumFORMATETC_0 **);
HRESULT_0 (*DAdvise)(IDataObject_0 *, FORMATETC *, DWORD, IAdviseSink_0 *, DWORD *);
HRESULT_0 (*DUnadvise)(IDataObject_0 *, DWORD);
HRESULT_0 (*EnumDAdvise)(IDataObject_0 *, IEnumSTATDATA_0 **);
};
