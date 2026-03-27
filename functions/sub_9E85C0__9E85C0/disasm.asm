0x9E85C0: push    14h
0x9E85C2: push    offset aIdispfamemax; "iDispFameMax"
0x9E85C7: mov     ecx, offset iDispFameMax
0x9E85CC: call    GameSetting_ConstrAndReg
0x9E85D1: push    offset sub_A1E0F0; void (__cdecl *)()
0x9E85D6: call    _atexit
0x9E85DB: pop     ecx
0x9E85DC: retn
