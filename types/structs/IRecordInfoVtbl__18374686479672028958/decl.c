struct IRecordInfoVtbl
{
HRESULT_0 (*QueryInterface)(IRecordInfo_0 *, const IID *const, void **);
ULONG (*AddRef)(IRecordInfo_0 *);
ULONG (*Release)(IRecordInfo_0 *);
HRESULT_0 (*RecordInit)(IRecordInfo_0 *, PVOID);
HRESULT_0 (*RecordClear)(IRecordInfo_0 *, PVOID);
HRESULT_0 (*RecordCopy)(IRecordInfo_0 *, PVOID, PVOID);
HRESULT_0 (*GetGuid)(IRecordInfo_0 *, GUID *);
HRESULT_0 (*GetName)(IRecordInfo_0 *, BSTR *);
HRESULT_0 (*GetSize)(IRecordInfo_0 *, ULONG *);
HRESULT_0 (*GetTypeInfo)(IRecordInfo_0 *, ITypeInfo_0 **);
HRESULT_0 (*GetField)(IRecordInfo_0 *, PVOID, LPCOLESTR, VARIANT *);
HRESULT_0 (*GetFieldNoCopy)(IRecordInfo_0 *, PVOID, LPCOLESTR, VARIANT *, PVOID *);
HRESULT_0 (*PutField)(IRecordInfo_0 *, ULONG, PVOID, LPCOLESTR, VARIANT *);
HRESULT_0 (*PutFieldNoCopy)(IRecordInfo_0 *, ULONG, PVOID, LPCOLESTR, VARIANT *);
HRESULT_0 (*GetFieldNames)(IRecordInfo_0 *, ULONG *, BSTR *);
BOOL (*IsMatchingType)(IRecordInfo_0 *, IRecordInfo_0 *);
PVOID (*RecordCreate)(IRecordInfo_0 *);
HRESULT_0 (*RecordCreateCopy)(IRecordInfo_0 *, PVOID, PVOID *);
HRESULT_0 (*RecordDestroy)(IRecordInfo_0 *, PVOID);
};
