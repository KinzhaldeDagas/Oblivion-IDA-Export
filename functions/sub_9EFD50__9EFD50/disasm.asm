0x9EFD50: fld1
0x9EFD52: push    ecx
0x9EFD53: fstp    [esp+4+var_4]; float
0x9EFD56: mov     ecx, offset fAbsorbGlowColorB
0x9EFD5B: push    offset aFabsorbglowc_1; "fAbsorbGlowColorB"
0x9EFD60: call    GameSetting_ConstrAndReg_float
0x9EFD65: push    offset sub_A20BD0; void (__cdecl *)()
0x9EFD6A: call    _atexit
0x9EFD6F: pop     ecx
0x9EFD70: retn
