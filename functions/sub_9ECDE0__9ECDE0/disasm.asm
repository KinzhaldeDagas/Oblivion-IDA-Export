0x9ECDE0: fld     ds:flt_A5ACC4
0x9ECDE6: push    ecx
0x9ECDE7: fstp    [esp+4+var_4]; float
0x9ECDEA: push    offset aFpotiont1retma; "fPotionT1RetMagMult"
0x9ECDEF: mov     ecx, offset fPotionT1RetMagMult
0x9ECDF4: call    GameSetting_ConstrAndReg_float
0x9ECDF9: push    offset sub_A1FAF0; void (__cdecl *)()
0x9ECDFE: call    _atexit
0x9ECE03: pop     ecx
0x9ECE04: retn
