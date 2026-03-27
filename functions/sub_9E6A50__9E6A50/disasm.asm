0x9E6A50: fld1
0x9E6A52: push    ecx
0x9E6A53: fstp    [esp+4+var_4]; float
0x9E6A56: mov     ecx, offset fDispTargetFactionRankBase
0x9E6A5B: push    offset aFdisptargetf_0; "fDispTargetFactionRankBase"
0x9E6A60: call    GameSetting_ConstrAndReg_float
0x9E6A65: push    offset sub_A1D760; void (__cdecl *)()
0x9E6A6A: call    _atexit
0x9E6A6F: pop     ecx
0x9E6A70: retn
