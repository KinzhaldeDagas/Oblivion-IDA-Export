0x9EB420: fld     ds:flt_A3D65C
0x9EB426: push    ecx
0x9EB427: fstp    [esp+4+var_4]; float
0x9EB42A: push    offset aFfatiguemult; "fFatigueMult"
0x9EB42F: mov     ecx, offset fFatigueMult
0x9EB434: call    GameSetting_ConstrAndReg_float
0x9EB439: push    offset sub_A1F190; void (__cdecl *)()
0x9EB43E: call    _atexit
0x9EB443: pop     ecx
0x9EB444: retn
