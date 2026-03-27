0x9FBE00: fld1
0x9FBE02: push    ecx
0x9FBE03: fstp    [esp+4+var_4]; float
0x9FBE06: mov     ecx, offset flt_B3B2BC
0x9FBE0B: push    offset aFmincreateddur; "fMinCreatedDur"
0x9FBE10: call    GameSetting_ConstrAndReg_float
0x9FBE15: push    offset sub_A24AF0; void (__cdecl *)()
0x9FBE1A: call    _atexit
0x9FBE1F: pop     ecx
0x9FBE20: retn
