struct IDataAdviseHolderVtbl
{
HRESULT_0 (*QueryInterface)(IDataAdviseHolder_0 *, const IID *const, void **);
ULONG (*AddRef)(IDataAdviseHolder_0 *);
ULONG (*Release)(IDataAdviseHolder_0 *);
HRESULT_0 (*Advise)(IDataAdviseHolder_0 *, IDataObject_0 *, FORMATETC *, DWORD, IAdviseSink_0 *, DWORD *);
HRESULT_0 (*Unadvise)(IDataAdviseHolder_0 *, DWORD);
HRESULT_0 (*EnumAdvise)(IDataAdviseHolder_0 *, IEnumSTATDATA_0 **);
HRESULT_0 (*SendOnDataChange)(IDataAdviseHolder_0 *, IDataObject_0 *, DWORD, DWORD);
};
