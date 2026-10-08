struct IReferenceClockVtbl
{
HRESULT (__stdcall *QueryInterface)(IReferenceClock *This, const IID *const riid, void **ppvObject) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IReferenceClock *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IReferenceClock *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetTime)(IReferenceClock *This, REFERENCE_TIME *pTime) __offset(OFF64|AUTO);
HRESULT (__stdcall *AdviseTime)(IReferenceClock *This, REFERENCE_TIME baseTime, REFERENCE_TIME streamTime, HEVENT hEvent, DWORD *pdwAdviseCookie) __offset(OFF64|AUTO);
HRESULT (__stdcall *AdvisePeriodic)(IReferenceClock *This, REFERENCE_TIME startTime, REFERENCE_TIME periodTime, HSEMAPHORE hSemaphore, DWORD *pdwAdviseCookie) __offset(OFF64|AUTO);
HRESULT (__stdcall *Unadvise)(IReferenceClock *This, DWORD dwAdviseCookie) __offset(OFF64|AUTO);
};
