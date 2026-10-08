struct IMallocVtbl
{
HRESULT_0 (*QueryInterface)(IMalloc_0 *, const IID *const, void **);
ULONG (*AddRef)(IMalloc_0 *);
ULONG (*Release)(IMalloc_0 *);
LPVOID (*Alloc)(IMalloc_0 *, SIZE_T);
LPVOID (*Realloc)(IMalloc_0 *, LPVOID, SIZE_T);
void (*Free)(IMalloc_0 *, LPVOID);
SIZE_T (*GetSize)(IMalloc_0 *, LPVOID);
int (*DidAlloc)(IMalloc_0 *, LPVOID);
void (*HeapMinimize)(IMalloc_0 *);
};
