0x9E6C00: fld     ds:flt_A57754
0x9E6C06: push    ecx
0x9E6C07: fstp    [esp+4+var_4]; float
0x9E6C0A: push    offset aFfightdistan_0; "fFightDistanceMult"
0x9E6C0F: mov     ecx, offset fFightDistanceMult
0x9E6C14: call    GameSetting_ConstrAndReg_float
0x9E6C19: push    offset sub_A1D7F0; void (__cdecl *)()
0x9E6C1E: call    _atexit
0x9E6C23: pop     ecx
0x9E6C24: retn
