struct IEnumContextPropsVtbl
{
HRESULT_0 (*QueryInterface)(IEnumContextProps_0 *, const IID *const, void **);
ULONG (*AddRef)(IEnumContextProps_0 *);
ULONG (*Release)(IEnumContextProps_0 *);
HRESULT_0 (*Next)(IEnumContextProps_0 *, ULONG, ContextProperty *, ULONG *);
HRESULT_0 (*Skip)(IEnumContextProps_0 *, ULONG);
HRESULT_0 (*Reset)(IEnumContextProps_0 *);
HRESULT_0 (*Clone)(IEnumContextProps_0 *, IEnumContextProps_0 **);
HRESULT_0 (*Count)(IEnumContextProps_0 *, ULONG *);
};
