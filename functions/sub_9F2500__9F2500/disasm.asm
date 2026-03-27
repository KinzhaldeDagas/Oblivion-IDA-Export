0x9F2500: push    offset aUses; "Uses"
0x9F2505: push    offset aSmiscuses; "sMiscUses"
0x9F250A: mov     ecx, offset sMiscUses
0x9F250F: call    GameSetting_ConstrAndReg
0x9F2514: push    offset sub_A21EB0; void (__cdecl *)()
0x9F2519: call    _atexit
0x9F251E: pop     ecx
0x9F251F: retn
