0x9EEC20: fld     ds:flt_A3744C
0x9EEC26: push    ecx
0x9EEC27: fstp    [esp+4+var_4]; float
0x9EEC2A: push    offset aFmagicarmorp_0; "fMagicArmorPenaltyMax"
0x9EEC2F: mov     ecx, offset fMagicArmorPenaltyMax
0x9EEC34: call    GameSetting_ConstrAndReg_float
0x9EEC39: push    offset sub_A205D0; void (__cdecl *)()
0x9EEC3E: call    _atexit
0x9EEC43: pop     ecx
0x9EEC44: retn
