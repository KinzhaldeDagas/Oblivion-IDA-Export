0x9E6E80: fld     ds:flt_A30634
0x9E6E86: push    ecx
0x9E6E87: fstp    [esp+4+var_4]; float
0x9E6E8A: push    offset aFaiaquirekillm; "fAiAquireKillMult"
0x9E6E8F: mov     ecx, offset fAiAquireKillMult
0x9E6E94: call    GameSetting_ConstrAndReg_float
0x9E6E99: push    offset sub_A1D8D0; void (__cdecl *)()
0x9E6E9E: call    _atexit
0x9E6EA3: pop     ecx
0x9E6EA4: retn
