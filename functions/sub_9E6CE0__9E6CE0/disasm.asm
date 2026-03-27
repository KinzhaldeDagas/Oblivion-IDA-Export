0x9E6CE0: fld     ds:flt_A31C80
0x9E6CE6: push    ecx
0x9E6CE7: fstp    [esp+4+var_4]; float
0x9E6CEA: push    offset aFsearchpackage; "fSearchPackageTimer"
0x9E6CEF: mov     ecx, offset fSearchPackageTimer
0x9E6CF4: call    GameSetting_ConstrAndReg_float
0x9E6CF9: push    offset sub_A1D840; void (__cdecl *)()
0x9E6CFE: call    _atexit
0x9E6D03: pop     ecx
0x9E6D04: retn
