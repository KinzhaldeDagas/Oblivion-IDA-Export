0x9E64F0: fld     ds:flt_A3D65C
0x9E64F6: push    ecx
0x9E64F7: fstp    [esp+4+var_4]; float
0x9E64FA: push    offset aFsneakswimming; "fSneakSwimmingLightMult"
0x9E64FF: mov     ecx, offset fSneakSwimmingLightMult
0x9E6504: call    GameSetting_ConstrAndReg_float
0x9E6509: push    offset sub_A1D580; void (__cdecl *)()
0x9E650E: call    _atexit
0x9E6513: pop     ecx
0x9E6514: retn
