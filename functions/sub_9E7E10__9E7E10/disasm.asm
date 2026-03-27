0x9E7E10: fld     ds:flt_A37CC8
0x9E7E16: push    ecx
0x9E7E17: fstp    [esp+4+var_4]; float
0x9E7E1A: push    offset aFvanitymodexmu; "fVanityModeXMult"
0x9E7E1F: mov     ecx, offset flt_B36B88
0x9E7E24: call    GameSetting_ConstrAndReg_float
0x9E7E29: push    offset sub_A1DE30; void (__cdecl *)()
0x9E7E2E: call    _atexit
0x9E7E33: pop     ecx
0x9E7E34: retn
