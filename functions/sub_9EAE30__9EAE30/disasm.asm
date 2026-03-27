0x9EAE30: fld     ds:flt_A3D65C
0x9EAE36: push    ecx
0x9EAE37: fstp    [esp+4+var_4]; float
0x9EAE3A: push    offset aFmoveswimwalkb; "fMoveSwimWalkBase"
0x9EAE3F: mov     ecx, offset fMoveSwimWalkBase
0x9EAE44: call    GameSetting_ConstrAndReg_float
0x9EAE49: push    offset sub_A1EF80; void (__cdecl *)()
0x9EAE4E: call    _atexit
0x9EAE53: pop     ecx
0x9EAE54: retn
