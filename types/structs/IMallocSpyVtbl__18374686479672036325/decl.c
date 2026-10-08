struct IMallocSpyVtbl
{
HRESULT_0 (*QueryInterface)(IMallocSpy_0 *, const IID *const, void **);
ULONG (*AddRef)(IMallocSpy_0 *);
ULONG (*Release)(IMallocSpy_0 *);
SIZE_T (*PreAlloc)(IMallocSpy_0 *, SIZE_T);
LPVOID (*PostAlloc)(IMallocSpy_0 *, LPVOID);
LPVOID (*PreFree)(IMallocSpy_0 *, LPVOID, BOOL);
void (*PostFree)(IMallocSpy_0 *, BOOL);
SIZE_T (*PreRealloc)(IMallocSpy_0 *, LPVOID, SIZE_T, LPVOID *, BOOL);
LPVOID (*PostRealloc)(IMallocSpy_0 *, LPVOID, BOOL);
LPVOID (*PreGetSize)(IMallocSpy_0 *, LPVOID, BOOL);
SIZE_T (*PostGetSize)(IMallocSpy_0 *, SIZE_T, BOOL);
LPVOID (*PreDidAlloc)(IMallocSpy_0 *, LPVOID, BOOL);
int (*PostDidAlloc)(IMallocSpy_0 *, LPVOID, BOOL, int);
void (*PreHeapMinimize)(IMallocSpy_0 *);
void (*PostHeapMinimize)(IMallocSpy_0 *);
};
