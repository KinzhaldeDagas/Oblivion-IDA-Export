0x9E9A10: fld     ds:flt_A3744C
0x9E9A16: push    ecx
0x9E9A17: fstp    [esp+4+var_4]; float
0x9E9A1A: push    offset aFarrowgravityb; "fArrowGravityBase"
0x9E9A1F: mov     ecx, offset flt_B37068
0x9E9A24: call    GameSetting_ConstrAndReg_float
0x9E9A29: push    offset sub_A1E7F0; void (__cdecl *)()
0x9E9A2E: call    _atexit
0x9E9A33: pop     ecx
0x9E9A34: retn
