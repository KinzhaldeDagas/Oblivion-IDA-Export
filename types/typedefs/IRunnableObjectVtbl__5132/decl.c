struct IRunnableObjectVtbl
{
HRESULT_0 (*QueryInterface)(IRunnableObject_0 *, const IID *const, void **);
ULONG (*AddRef)(IRunnableObject_0 *);
ULONG (*Release)(IRunnableObject_0 *);
HRESULT_0 (*GetRunningClass)(IRunnableObject_0 *, LPCLSID);
HRESULT_0 (*Run)(IRunnableObject_0 *, LPBINDCTX);
BOOL (*IsRunning)(IRunnableObject_0 *);
HRESULT_0 (*LockRunning)(IRunnableObject_0 *, BOOL, BOOL);
HRESULT_0 (*SetContainedObject)(IRunnableObject_0 *, BOOL);
};
