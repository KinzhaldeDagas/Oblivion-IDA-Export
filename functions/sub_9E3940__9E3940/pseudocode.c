int sub_9E3940()
{
  NiInitalizeCriticalSection(&g_TESWorldSpaceReferenceIndexLock);// Verified: initializes g_TESWorldSpaceReferenceIndexLock during module initialization; registered atexit cleanup calls NiDeleteCriticalSection. /*0x9e3945*/
  return atexit(sub_A1C000); /*0x9e3955*/
}
