0x9E8750: fld     ds:flt_A417B4
0x9E8756: push    ecx
0x9E8757: fstp    [esp+4+var_4]; float
0x9E875A: push    offset aFaifleehealthm; "fAIFleeHealthMult"
0x9E875F: mov     ecx, offset flt_B36D30
0x9E8764: call    GameSetting_ConstrAndReg_float
0x9E8769: push    offset sub_A1E180; void (__cdecl *)()
0x9E876E: call    _atexit
0x9E8773: pop     ecx
0x9E8774: retn
