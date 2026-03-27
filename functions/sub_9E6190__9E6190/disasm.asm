0x9E6190: fld     ds:fConstant_2
0x9E6196: push    ecx
0x9E6197: fstp    [esp+4+var_4]; float
0x9E619A: push    offset aFsunalphatrans; "fSunAlphaTransTime"
0x9E619F: mov     ecx, offset flt_B366C0
0x9E61A4: call    GameSetting_ConstrAndReg_float
0x9E61A9: push    offset sub_A1D440; void (__cdecl *)()
0x9E61AE: call    _atexit
0x9E61B3: pop     ecx
0x9E61B4: retn
