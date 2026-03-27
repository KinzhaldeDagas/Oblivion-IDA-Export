0x9EAEF0: fld     ds:flt_A31E2C
0x9EAEF6: push    ecx
0x9EAEF7: fstp    [esp+4+var_4]; float
0x9EAEFA: push    offset aFmoveminflyspe; "fMoveMinFlySpeed"
0x9EAEFF: mov     ecx, offset fMoveMinFlySpeed
0x9EAF04: call    GameSetting_ConstrAndReg_float
0x9EAF09: push    offset sub_A1EFC0; void (__cdecl *)()
0x9EAF0E: call    _atexit
0x9EAF13: pop     ecx
0x9EAF14: retn
