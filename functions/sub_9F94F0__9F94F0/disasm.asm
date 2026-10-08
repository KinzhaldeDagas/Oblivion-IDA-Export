0x9F94F0: mov     ecx, offset g_BSTreeManager_TreeCriticalSection; Verified static initializer for g_BSTreeManager_TreeCriticalSection; initializes the lock and registers its atexit destructor.
0x9F94F5: call    NiInitalizeCriticalSection
0x9F94FA: push    offset BSTreeManager_TreeCriticalSection_atexit; void (__cdecl *)()
0x9F94FF: call    _atexit
0x9F9504: pop     ecx
0x9F9505: retn
