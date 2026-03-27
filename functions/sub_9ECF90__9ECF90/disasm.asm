0x9ECF90: fld     ds:flt_A5ACC4
0x9ECF96: push    ecx
0x9ECF97: fstp    [esp+4+var_4]; float
0x9ECF9A: push    offset aFpotiont3retma; "fPotionT3RetMagMult"
0x9ECF9F: mov     ecx, offset fPotionT3RetMagMult
0x9ECFA4: call    GameSetting_ConstrAndReg_float
0x9ECFA9: push    offset sub_A1FB80; void (__cdecl *)()
0x9ECFAE: call    _atexit
0x9ECFB3: pop     ecx
0x9ECFB4: retn
