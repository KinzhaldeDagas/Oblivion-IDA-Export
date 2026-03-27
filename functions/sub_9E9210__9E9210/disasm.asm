0x9E9210: fld     ds:flt_A3D65C
0x9E9216: push    ecx
0x9E9217: fstp    [esp+4+var_4]; float
0x9E921A: push    offset aFblockscorenos; "fBlockScoreNoShieldMult"
0x9E921F: mov     ecx, offset fBlockScoreNoShieldMult
0x9E9224: call    GameSetting_ConstrAndReg_float
0x9E9229: push    offset sub_A1E540; void (__cdecl *)()
0x9E922E: call    _atexit
0x9E9233: pop     ecx
0x9E9234: retn
