0x9DF500: push    offset aLoredas; "Loredas"
0x9DF505: push    offset aSdayloredas; "sDayLoredas"
0x9DF50A: mov     ecx, offset sDayLoredas
0x9DF50F: call    GameSetting_ConstrAndReg
0x9DF514: push    offset sub_A1A040; void (__cdecl *)()
0x9DF519: call    _atexit
0x9DF51E: pop     ecx
0x9DF51F: retn
