0x9ECE70: fld     ds:flt_A5AD0C
0x9ECE76: push    ecx
0x9ECE77: fstp    [esp+4+var_4]; float
0x9ECE7A: push    offset aFpotiont1caldu; "fPotionT1CalDurMult"
0x9ECE7F: mov     ecx, offset fPotionT1CalDurMult
0x9ECE84: call    GameSetting_ConstrAndReg_float
0x9ECE89: push    offset sub_A1FB20; void (__cdecl *)()
0x9ECE8E: call    _atexit
0x9ECE93: pop     ecx
0x9ECE94: retn
