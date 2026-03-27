0x9F0430: push    offset aFame; "Fame:"
0x9F0435: push    offset aSmiscfame; "sMiscFame"
0x9F043A: mov     ecx, offset dword_B383F8
0x9F043F: call    GameSetting_ConstrAndReg
0x9F0444: push    offset sub_A20F10; void (__cdecl *)()
0x9F0449: call    _atexit
0x9F044E: pop     ecx
0x9F044F: retn
