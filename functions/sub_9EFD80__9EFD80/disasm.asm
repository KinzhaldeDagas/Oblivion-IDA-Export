0x9EFD80: fld     ds:flt_A5C610
0x9EFD86: push    ecx
0x9EFD87: fstp    [esp+4+var_4]; float
0x9EFD8A: push    offset aFabsorbmovespe; "fAbsorbMoveSpeed"
0x9EFD8F: mov     ecx, offset fAbsorbMoveSpeed
0x9EFD94: call    GameSetting_ConstrAndReg_float
0x9EFD99: push    offset sub_A20BE0; void (__cdecl *)()
0x9EFD9E: call    _atexit
0x9EFDA3: pop     ecx
0x9EFDA4: retn
