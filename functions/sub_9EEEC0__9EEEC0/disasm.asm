0x9EEEC0: fld1
0x9EEEC2: push    ecx
0x9EEEC3: fstp    [esp+4+var_4]; float
0x9EEEC6: mov     ecx, offset fMagicSunDamageScreenGlowRateDown
0x9EEECB: push    offset aFmagicsundam_5; "fMagicSunDamageScreenGlowRateDown"
0x9EEED0: call    GameSetting_ConstrAndReg_float
0x9EEED5: push    offset sub_A206B0; void (__cdecl *)()
0x9EEEDA: call    _atexit
0x9EEEDF: pop     ecx
0x9EEEE0: retn
