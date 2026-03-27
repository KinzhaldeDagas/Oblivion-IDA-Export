0x9EAE00: fld     ds:flt_A41328
0x9EAE06: push    ecx
0x9EAE07: fstp    [esp+4+var_4]; float
0x9EAE0A: push    offset aFmovesneakmult; "fMoveSneakMult"
0x9EAE0F: mov     ecx, offset fMoveSneakMult
0x9EAE14: call    GameSetting_ConstrAndReg_float
0x9EAE19: push    offset sub_A1EF70; void (__cdecl *)()
0x9EAE1E: call    _atexit
0x9EAE23: pop     ecx
0x9EAE24: retn
