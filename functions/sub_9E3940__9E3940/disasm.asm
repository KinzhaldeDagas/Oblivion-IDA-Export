0x9E3940: mov     ecx, offset g_TESWorldSpaceReferenceIndexLock; lpCriticalSection
0x9E3945: call    NiInitalizeCriticalSection; Verified: initializes g_TESWorldSpaceReferenceIndexLock during module initialization; registered atexit cleanup calls NiDeleteCriticalSection.
0x9E394A: push    offset sub_A1C000; void (__cdecl *)()
0x9E394F: call    _atexit
0x9E3954: pop     ecx
0x9E3955: retn
