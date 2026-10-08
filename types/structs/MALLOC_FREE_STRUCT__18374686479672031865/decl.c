struct _MALLOC_FREE_STRUCT
{
void *(*pfnAllocate)(SIZE_T);
void (*pfnFree)(void *);
};
