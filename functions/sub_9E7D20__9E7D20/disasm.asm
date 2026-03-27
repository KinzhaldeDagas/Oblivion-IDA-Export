0x9E7D20: fld     ds:flt_A37CC8
0x9E7D26: push    ecx
0x9E7D27: fstp    [esp+4+var_4]; float
0x9E7D2A: push    offset aFvanitymodew_0; "fVanityModeWheelMin"
0x9E7D2F: mov     ecx, offset flt_B36B60
0x9E7D34: call    GameSetting_ConstrAndReg_float
0x9E7D39: push    offset sub_A1DDE0; void (__cdecl *)()
0x9E7D3E: call    _atexit
0x9E7D43: pop     ecx
0x9E7D44: retn
