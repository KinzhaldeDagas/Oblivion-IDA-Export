void __cdecl sub_A1C000()
{
  NiDeleteCriticalSection(&g_TESWorldSpaceReferenceIndexLock);// Verified: atexit cleanup for g_TESWorldSpaceReferenceIndexLock. /*0xa1c005*/
}
