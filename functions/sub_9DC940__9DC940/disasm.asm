0x9DC940: push    offset EmptyString
0x9DC945: push    offset aSrestorename; "sRestoreName"
0x9DC94A: mov     ecx, offset sRestoreName
0x9DC94F: call    GameSetting_ConstrAndReg
0x9DC954: push    offset sub_A18A50; void (__cdecl *)()
0x9DC959: call    _atexit
0x9DC95E: pop     ecx
0x9DC95F: retn
