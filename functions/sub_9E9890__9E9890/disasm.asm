0x9E9890: fld     ds:flt_A342A0
0x9E9896: push    ecx
0x9E9897: fstp    [esp+4+var_4]; float
0x9E989A: push    offset aFfleedistancee; "fFleeDistanceExterior"
0x9E989F: mov     ecx, offset flt_B37028
0x9E98A4: call    GameSetting_ConstrAndReg_float
0x9E98A9: push    offset sub_A1E770; void (__cdecl *)()
0x9E98AE: call    _atexit
0x9E98B3: pop     ecx
0x9E98B4: retn
