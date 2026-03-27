0x9E9E00: fld     ds:flt_A342A0
0x9E9E06: push    ecx
0x9E9E07: fstp    [esp+4+var_4]; float
0x9E9E0A: push    offset aFarrowmaxdista; "fArrowMaxDistance"
0x9E9E0F: mov     ecx, offset fArrowMaxDistance
0x9E9E14: call    GameSetting_ConstrAndReg_float
0x9E9E19: push    offset sub_A1E950; void (__cdecl *)()
0x9E9E1E: call    _atexit
0x9E9E23: pop     ecx
0x9E9E24: retn
