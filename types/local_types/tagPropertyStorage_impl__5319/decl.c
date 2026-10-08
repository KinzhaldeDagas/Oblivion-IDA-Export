struct tagPropertyStorage_impl
{
IPropertyStorage_0 IPropertyStorage_iface;
LONG ref;
CRITICAL_SECTION cs;
IStream_0 *stm;
BOOL dirty;
FMTID fmtid;
CLSID clsid;
WORD format;
DWORD originatorOS;
DWORD grfFlags;
DWORD grfMode;
UINT codePage;
LCID locale;
PROPID highestProp;
dictionary *name_to_propid;
dictionary *propid_to_name;
dictionary *propid_to_prop;
};
