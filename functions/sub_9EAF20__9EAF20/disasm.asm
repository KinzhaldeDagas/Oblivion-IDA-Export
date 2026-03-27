0x9EAF20: fld     ds:flt_A34ABC
0x9EAF26: push    ecx
0x9EAF27: fstp    [esp+4+var_4]; float
0x9EAF2A: push    offset aFmovemaxflyspe; "fMoveMaxFlySpeed"
0x9EAF2F: mov     ecx, offset flt_B37458
0x9EAF34: call    GameSetting_ConstrAndReg_float
0x9EAF39: push    offset sub_A1EFD0; void (__cdecl *)()
0x9EAF3E: call    _atexit
0x9EAF43: pop     ecx
0x9EAF44: retn
