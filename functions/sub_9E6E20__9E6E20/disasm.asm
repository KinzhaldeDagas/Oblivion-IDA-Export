0x9E6E20: fld     ds:flt_A30634
0x9E6E26: push    ecx
0x9E6E27: fstp    [esp+4+var_4]; float
0x9E6E2A: push    offset aFaiaquirepickm; "fAiAquirePickMult"
0x9E6E2F: mov     ecx, offset fAiAquirePickMult
0x9E6E34: call    GameSetting_ConstrAndReg_float
0x9E6E39: push    offset sub_A1D8B0; void (__cdecl *)()
0x9E6E3E: call    _atexit
0x9E6E43: pop     ecx
0x9E6E44: retn
