0x9ECF00: fld     ds:flt_A5ACF4
0x9ECF06: push    ecx
0x9ECF07: fstp    [esp+4+var_4]; float
0x9ECF0A: push    offset aFpotiont2retdu; "fPotionT2RetDurMult"
0x9ECF0F: mov     ecx, offset fPotionT2RetDurMult
0x9ECF14: call    GameSetting_ConstrAndReg_float
0x9ECF19: push    offset sub_A1FB50; void (__cdecl *)()
0x9ECF1E: call    _atexit
0x9ECF23: pop     ecx
0x9ECF24: retn
