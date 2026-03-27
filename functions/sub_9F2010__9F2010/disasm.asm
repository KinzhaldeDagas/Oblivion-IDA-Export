0x9F2010: push    0
0x9F2012: push    offset aIallowrepairdu; "iAllowRepairDuringCombat"
0x9F2017: mov     ecx, offset dword_B38A90
0x9F201C: call    GameSetting_ConstrAndReg
0x9F2021: push    offset sub_A21C40; void (__cdecl *)()
0x9F2026: call    _atexit
0x9F202B: pop     ecx
0x9F202C: retn
