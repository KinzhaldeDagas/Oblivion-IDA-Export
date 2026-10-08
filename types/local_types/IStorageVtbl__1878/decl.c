struct IStorageVtbl
{
HRESULT_0 (*QueryInterface)(IStorage_0 *, const IID *const, void **);
ULONG (*AddRef)(IStorage_0 *);
ULONG (*Release)(IStorage_0 *);
HRESULT_0 (*CreateStream)(IStorage_0 *, LPCOLESTR, DWORD, DWORD, DWORD, IStream_0 **);
HRESULT_0 (*OpenStream)(IStorage_0 *, LPCOLESTR, void *, DWORD, DWORD, IStream_0 **);
HRESULT_0 (*CreateStorage)(IStorage_0 *, LPCOLESTR, DWORD, DWORD, DWORD, IStorage_0 **);
HRESULT_0 (*OpenStorage)(IStorage_0 *, LPCOLESTR, IStorage_0 *, DWORD, SNB, DWORD, IStorage_0 **);
HRESULT_0 (*CopyTo)(IStorage_0 *, DWORD, const IID *, SNB, IStorage_0 *);
HRESULT_0 (*MoveElementTo)(IStorage_0 *, LPCOLESTR, IStorage_0 *, LPCOLESTR, DWORD);
HRESULT_0 (*Commit)(IStorage_0 *, DWORD);
HRESULT_0 (*Revert)(IStorage_0 *);
HRESULT_0 (*EnumElements)(IStorage_0 *, DWORD, void *, DWORD, IEnumSTATSTG_0 **);
HRESULT_0 (*DestroyElement)(IStorage_0 *, LPCOLESTR);
HRESULT_0 (*RenameElement)(IStorage_0 *, LPCOLESTR, LPCOLESTR);
HRESULT_0 (*SetElementTimes)(IStorage_0 *, LPCOLESTR, const FILETIME *, const FILETIME *, const FILETIME *);
HRESULT_0 (*SetClass)(IStorage_0 *, const CLSID *const);
HRESULT_0 (*SetStateBits)(IStorage_0 *, DWORD, DWORD);
HRESULT_0 (*Stat)(IStorage_0 *, STATSTG *, DWORD);
};
