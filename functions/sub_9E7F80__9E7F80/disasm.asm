0x9E7F80: fld     ds:fConstant_2
0x9E7F86: push    ecx
0x9E7F87: fstp    [esp+4+var_4]; float
0x9E7F8A: push    offset aFfirstpersonsc; "fFirstPersonScaleSeconds"
0x9E7F8F: mov     ecx, offset flt_B36BC8
0x9E7F94: call    GameSetting_ConstrAndReg_float
0x9E7F99: push    offset sub_A1DEB0; void (__cdecl *)()
0x9E7F9E: call    _atexit
0x9E7FA3: pop     ecx
0x9E7FA4: retn
