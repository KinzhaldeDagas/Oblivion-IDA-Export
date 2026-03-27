0x9F6D90: push    offset aChinForwardBac; "Chin forward/backward"
0x9F6D95: push    offset aSchinforward; "sChinforward"
0x9F6D9A: mov     ecx, offset dword_B390D8
0x9F6D9F: call    GameSetting_ConstrAndReg
0x9F6DA4: push    offset sub_A228D0; void (__cdecl *)()
0x9F6DA9: call    _atexit
0x9F6DAE: pop     ecx
0x9F6DAF: retn
