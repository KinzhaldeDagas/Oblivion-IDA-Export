0x9E6E50: fld     ds:flt_A3D8F0
0x9E6E56: push    ecx
0x9E6E57: fstp    [esp+4+var_4]; float
0x9E6E5A: push    offset aFaiaquirekillb; "fAiAquireKillBase"
0x9E6E5F: mov     ecx, offset fAiAquireKillBase
0x9E6E64: call    GameSetting_ConstrAndReg_float
0x9E6E69: push    offset sub_A1D8C0; void (__cdecl *)()
0x9E6E6E: call    _atexit
0x9E6E73: pop     ecx
0x9E6E74: retn
