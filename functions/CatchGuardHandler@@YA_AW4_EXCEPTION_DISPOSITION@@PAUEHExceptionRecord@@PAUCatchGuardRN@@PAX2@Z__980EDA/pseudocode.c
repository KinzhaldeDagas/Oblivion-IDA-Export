int __cdecl CatchGuardHandler(struct EHExceptionRecord *a1, struct CatchGuardRN *a2, void *a3)
{
  return __InternalCxxFrameHandler(
           (int)a1,
           *((_DWORD *)a2 + 4),
           (int)a3,
           0,
           *((_DWORD *)a2 + 3),
           *((_DWORD *)a2 + 5),
           (int)a2,
           0);
}
