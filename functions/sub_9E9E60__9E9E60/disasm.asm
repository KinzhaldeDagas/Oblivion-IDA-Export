0x9E9E60: fld     ds:flt_A37CC8
0x9E9E66: push    ecx
0x9E9E67: fstp    [esp+4+var_4]; float
0x9E9E6A: push    offset aFcombatmaxhold; "fCombatMaxHoldScore"
0x9E9E6F: mov     ecx, offset fCombatMaxHoldScore
0x9E9E74: call    GameSetting_ConstrAndReg_float
0x9E9E79: push    offset sub_A1E970; void (__cdecl *)()
0x9E9E7E: call    _atexit
0x9E9E83: pop     ecx
0x9E9E84: retn
