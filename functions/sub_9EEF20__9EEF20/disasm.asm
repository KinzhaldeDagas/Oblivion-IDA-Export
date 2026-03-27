0x9EEF20: fld     ds:fConstant_2
0x9EEF26: push    ecx
0x9EEF27: fstp    [esp+4+var_4]; float
0x9EEF2A: push    offset aFmagicsundam_7; "fMagicSunDamagePainInitialDelay"
0x9EEF2F: mov     ecx, offset fMagicSunDamagePainInitialDelay
0x9EEF34: call    GameSetting_ConstrAndReg_float
0x9EEF39: push    offset sub_A206D0; void (__cdecl *)()
0x9EEF3E: call    _atexit
0x9EEF43: pop     ecx
0x9EEF44: retn
