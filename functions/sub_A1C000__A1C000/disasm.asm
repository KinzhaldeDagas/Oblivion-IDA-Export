0xA1C000: mov     ecx, offset g_TESWorldSpaceReferenceIndexLock; lpCriticalSection
0xA1C005: jmp     NiDeleteCriticalSection; Verified: atexit cleanup for g_TESWorldSpaceReferenceIndexLock.
