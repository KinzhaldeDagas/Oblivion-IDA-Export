0x9EEE90: fld1
0x9EEE92: push    ecx
0x9EEE93: fstp    [esp+4+var_4]; float
0x9EEE96: mov     ecx, offset fMagicSunDamageScreenGlowRateUp
0x9EEE9B: push    offset aFmagicsundam_4; "fMagicSunDamageScreenGlowRateUp"
0x9EEEA0: call    GameSetting_ConstrAndReg_float
0x9EEEA5: push    offset sub_A206A0; void (__cdecl *)()
0x9EEEAA: call    _atexit
0x9EEEAF: pop     ecx
0x9EEEB0: retn
