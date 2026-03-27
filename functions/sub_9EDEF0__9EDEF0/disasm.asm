0x9EDEF0: fld     ds:flt_A3744C
0x9EDEF6: push    ecx
0x9EDEF7: fstp    [esp+4+var_4]; float
0x9EDEFA: push    offset aFessentialheal; "fEssentialHealthPercentReGain"
0x9EDEFF: mov     ecx, offset flt_B37D10
0x9EDF04: call    GameSetting_ConstrAndReg_float
0x9EDF09: push    offset sub_A20140; void (__cdecl *)()
0x9EDF0E: call    _atexit
0x9EDF13: pop     ecx
0x9EDF14: retn
