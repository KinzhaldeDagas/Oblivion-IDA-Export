0x9EA420: fld     ds:fConstant_2
0x9EA426: push    ecx
0x9EA427: fstp    [esp+4+var_4]; float
0x9EA42A: push    offset aFcombatgiantcr; "fCombatGiantCreatureReachMult"
0x9EA42F: mov     ecx, offset fCombatGiantCreatureReachMult
0x9EA434: call    GameSetting_ConstrAndReg_float
0x9EA439: push    offset sub_A1EBF0; void (__cdecl *)()
0x9EA43E: call    _atexit
0x9EA443: pop     ecx
0x9EA444: retn
