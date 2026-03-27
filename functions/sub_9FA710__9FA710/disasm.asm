0x9FA710: fld     ds:flt_A3F4E0
0x9FA716: push    ecx
0x9FA717: fstp    [esp+4+var_4]; float
0x9FA71A: push    offset aFpathminimalus; "fPathMinimalUseDoorPenalty"
0x9FA71F: mov     ecx, offset flt_B3A440
0x9FA724: call    GameSetting_ConstrAndReg_float
0x9FA729: push    offset sub_A240B0; void (__cdecl *)()
0x9FA72E: call    _atexit
0x9FA733: pop     ecx
0x9FA734: retn
