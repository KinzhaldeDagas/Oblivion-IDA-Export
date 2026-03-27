0x9E7F50: fld     ds:flt_A41328
0x9E7F56: push    ecx
0x9E7F57: fstp    [esp+4+var_4]; float
0x9E7F5A: push    offset aFfirstpersonha; "fFirstPersonHandFollowMult"
0x9E7F5F: mov     ecx, offset flt_B36BC0
0x9E7F64: call    GameSetting_ConstrAndReg_float
0x9E7F69: push    offset sub_A1DEA0; void (__cdecl *)()
0x9E7F6E: call    _atexit
0x9E7F73: pop     ecx
0x9E7F74: retn
