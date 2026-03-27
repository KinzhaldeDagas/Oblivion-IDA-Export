0x9E7D80: fld     ds:flt_A44BA4
0x9E7D86: push    ecx
0x9E7D87: fstp    [esp+4+var_4]; float
0x9E7D8A: push    offset aFvanitymodew_2; "fVanityModeWheelDefault"
0x9E7D8F: mov     ecx, offset flt_B36B70
0x9E7D94: call    GameSetting_ConstrAndReg_float
0x9E7D99: push    offset sub_A1DE00; void (__cdecl *)()
0x9E7D9E: call    _atexit
0x9E7DA3: pop     ecx
0x9E7DA4: retn
