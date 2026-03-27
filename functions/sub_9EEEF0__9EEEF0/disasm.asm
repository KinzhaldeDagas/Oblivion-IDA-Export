0x9EEEF0: fld     ds:flt_A5BDFC
0x9EEEF6: push    ecx
0x9EEEF7: fstp    [esp+4+var_4]; float
0x9EEEFA: push    offset aFmagicsundam_6; "fMagicSunDamagePainTimer"
0x9EEEFF: mov     ecx, offset fMagicSunDamagePainTimer
0x9EEF04: call    GameSetting_ConstrAndReg_float
0x9EEF09: push    offset sub_A206C0; void (__cdecl *)()
0x9EEF0E: call    _atexit
0x9EEF13: pop     ecx
0x9EEF14: retn
