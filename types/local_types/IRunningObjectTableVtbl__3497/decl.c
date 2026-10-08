struct IRunningObjectTableVtbl
{
HRESULT_0 (*QueryInterface)(IRunningObjectTable_0 *, const IID *const, void **);
ULONG (*AddRef)(IRunningObjectTable_0 *);
ULONG (*Release)(IRunningObjectTable_0 *);
HRESULT_0 (*Register)(IRunningObjectTable_0 *, DWORD, IUnknown_0 *, IMoniker_0 *, DWORD *);
HRESULT_0 (*Revoke)(IRunningObjectTable_0 *, DWORD);
HRESULT_0 (*IsRunning)(IRunningObjectTable_0 *, IMoniker_0 *);
HRESULT_0 (*GetObject)(IRunningObjectTable_0 *, IMoniker_0 *, IUnknown_0 **);
HRESULT_0 (*NoteChangeTime)(IRunningObjectTable_0 *, DWORD, FILETIME *);
HRESULT_0 (*GetTimeOfLastChange)(IRunningObjectTable_0 *, IMoniker_0 *, FILETIME *);
HRESULT_0 (*EnumRunning)(IRunningObjectTable_0 *, IEnumMoniker_0 **);
};
