0x9ECDB0: fld     ds:flt_A45128
0x9ECDB6: push    ecx
0x9ECDB7: fstp    [esp+4+var_4]; float
0x9ECDBA: push    offset aFpotiont1magmu; "fPotionT1MagMult"
0x9ECDBF: mov     ecx, offset fPotionT1MagMult
0x9ECDC4: call    GameSetting_ConstrAndReg_float
0x9ECDC9: push    offset sub_A1FAE0; void (__cdecl *)()
0x9ECDCE: call    _atexit
0x9ECDD3: pop     ecx
0x9ECDD4: retn
