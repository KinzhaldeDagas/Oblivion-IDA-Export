0x9E9780: fld1
0x9E9782: push    ecx
0x9E9783: fstp    [esp+4+var_4]; float
0x9E9786: mov     ecx, offset fFatigueBlockMult
0x9E978B: push    offset aFfatigueblockm; "fFatigueBlockMult"
0x9E9790: call    GameSetting_ConstrAndReg_float
0x9E9795: push    offset sub_A1E710; void (__cdecl *)()
0x9E979A: call    _atexit
0x9E979F: pop     ecx
0x9E97A0: retn
