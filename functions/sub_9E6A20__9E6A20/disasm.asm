0x9E6A20: fld1
0x9E6A22: push    ecx
0x9E6A23: fstp    [esp+4+var_4]; float
0x9E6A26: mov     ecx, offset fDispTargetFactionMult
0x9E6A2B: push    offset aFdisptargetfac; "fDispTargetFactionMult"
0x9E6A30: call    GameSetting_ConstrAndReg_float
0x9E6A35: push    offset sub_A1D750; void (__cdecl *)()
0x9E6A3A: call    _atexit
0x9E6A3F: pop     ecx
0x9E6A40: retn
