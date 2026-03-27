0x9ECE40: fld     ds:flt_A5ACF4
0x9ECE46: push    ecx
0x9ECE47: fstp    [esp+4+var_4]; float
0x9ECE4A: push    offset aFpotiont1calma; "fPotionT1CalMagMult"
0x9ECE4F: mov     ecx, offset fPotionT1CalMagMult
0x9ECE54: call    GameSetting_ConstrAndReg_float
0x9ECE59: push    offset sub_A1FB10; void (__cdecl *)()
0x9ECE5E: call    _atexit
0x9ECE63: pop     ecx
0x9ECE64: retn
