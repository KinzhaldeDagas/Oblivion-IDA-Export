0x9EEB30: fld     ds:flt_A41328
0x9EEB36: push    ecx
0x9EEB37: fstp    [esp+4+var_4]; float
0x9EEB3A: push    offset aFmagickareturn; "fMagickaReturnBase"
0x9EEB3F: mov     ecx, offset flt_B37F30
0x9EEB44: call    GameSetting_ConstrAndReg_float
0x9EEB49: push    offset sub_A20580; void (__cdecl *)()
0x9EEB4E: call    _atexit
0x9EEB53: pop     ecx
0x9EEB54: retn
