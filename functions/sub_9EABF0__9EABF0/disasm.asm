0x9EABF0: fld     ds:flt_A47E6C
0x9EABF6: push    ecx
0x9EABF7: fstp    [esp+4+var_4]; float
0x9EABFA: push    offset aFmoveencumeffe; "fMoveEncumEffect"
0x9EABFF: mov     ecx, offset fMoveEncumEffect
0x9EAC04: call    GameSetting_ConstrAndReg_float
0x9EAC09: push    offset sub_A1EEC0; void (__cdecl *)()
0x9EAC0E: call    _atexit
0x9EAC13: pop     ecx
0x9EAC14: retn
