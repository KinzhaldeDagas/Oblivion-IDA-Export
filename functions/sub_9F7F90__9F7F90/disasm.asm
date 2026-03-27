0x9F7F90: push    offset aYouHaveTooMany; "You have too many followers."
0x9F7F95: push    offset aSnomorefollowe; "sNoMoreFollowers"
0x9F7F9A: mov     ecx, offset dword_B394E8
0x9F7F9F: call    GameSetting_ConstrAndReg
0x9F7FA4: push    offset sub_A230F0; void (__cdecl *)()
0x9F7FA9: call    _atexit
0x9F7FAE: pop     ecx
0x9F7FAF: retn
