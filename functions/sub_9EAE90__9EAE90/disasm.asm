0x9EAE90: fld     ds:flt_A3D65C
0x9EAE96: push    ecx
0x9EAE97: fstp    [esp+4+var_4]; float
0x9EAE9A: push    offset aFmoveswimrunba; "fMoveSwimRunBase"
0x9EAE9F: mov     ecx, offset fMoveSwimRunBase
0x9EAEA4: call    GameSetting_ConstrAndReg_float
0x9EAEA9: push    offset sub_A1EFA0; void (__cdecl *)()
0x9EAEAE: call    _atexit
0x9EAEB3: pop     ecx
0x9EAEB4: retn
