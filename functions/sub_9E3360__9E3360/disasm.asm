0x9E3360: push    offset g_PathGridCriticalSection; Verified PathGrid startup initializer: calls InitializeCriticalSection(&g_PathGridCriticalSection) and registers TESPathGrid_DeleteCriticalSectionAtExit with atexit.
0x9E3365: call    ds:InitializeCriticalSection
0x9E336B: push    offset TESPathGrid_DeleteCriticalSectionAtExit; void (__cdecl *)()
0x9E3370: call    _atexit
0x9E3375: pop     ecx
0x9E3376: retn
