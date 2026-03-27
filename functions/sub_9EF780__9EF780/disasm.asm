0x9EF780: fld     ds:flt_A5A5F8
0x9EF786: push    ecx
0x9EF787: fstp    [esp+4+var_4]; float
0x9EF78A: push    offset aFshockcastvoff; "fShockCastVOffset"
0x9EF78F: mov     ecx, offset fShockCastVOffset
0x9EF794: call    GameSetting_ConstrAndReg_float
0x9EF799: push    offset sub_A209C0; void (__cdecl *)()
0x9EF79E: call    _atexit
0x9EF7A3: pop     ecx
0x9EF7A4: retn
