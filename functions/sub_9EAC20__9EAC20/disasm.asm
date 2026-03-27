0x9EAC20: fld     ds:flt_A3744C
0x9EAC26: push    ecx
0x9EAC27: fstp    [esp+4+var_4]; float
0x9EAC2A: push    offset aFmoveencumef_0; "fMoveEncumEffectNoWea"
0x9EAC2F: mov     ecx, offset fMoveEncumEffectNoWea
0x9EAC34: call    GameSetting_ConstrAndReg_float
0x9EAC39: push    offset sub_A1EED0; void (__cdecl *)()
0x9EAC3E: call    _atexit
0x9EAC43: pop     ecx
0x9EAC44: retn
