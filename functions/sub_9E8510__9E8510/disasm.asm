0x9E8510: fld     ds:flt_A342A0
0x9E8516: push    ecx
0x9E8517: fstp    [esp+4+var_4]; float
0x9E851A: push    offset aFaiidleanimati; "fAIIdleAnimationDistance"
0x9E851F: mov     ecx, offset flt_B36CC8
0x9E8524: call    GameSetting_ConstrAndReg_float
0x9E8529: push    offset sub_A1E0B0; void (__cdecl *)()
0x9E852E: call    _atexit
0x9E8533: pop     ecx
0x9E8534: retn
