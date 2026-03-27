0x9E6580: fld     ds:fConstant_2
0x9E6586: push    ecx
0x9E6587: fstp    [esp+4+var_4]; float
0x9E658A: push    offset aFsneakexterior; "fSneakExteriorDistanceMult"
0x9E658F: mov     ecx, offset fSneakExteriorDistanceMult
0x9E6594: call    GameSetting_ConstrAndReg_float
0x9E6599: push    offset sub_A1D5B0; void (__cdecl *)()
0x9E659E: call    _atexit
0x9E65A3: pop     ecx
0x9E65A4: retn
