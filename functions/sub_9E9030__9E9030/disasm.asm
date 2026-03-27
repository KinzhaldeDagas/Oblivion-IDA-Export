0x9E9030: fld1
0x9E9032: push    ecx
0x9E9033: fstp    [esp+4+var_4]; float
0x9E9036: mov     ecx, offset fArmorRatingConditionMult
0x9E903B: push    offset aFarmorrating_0; "fArmorRatingConditionMult"
0x9E9040: call    GameSetting_ConstrAndReg_float
0x9E9045: push    offset sub_A1E480; void (__cdecl *)()
0x9E904A: call    _atexit
0x9E904F: pop     ecx
0x9E9050: retn
