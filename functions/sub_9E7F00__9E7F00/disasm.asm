0x9E7F00: fld     ds:flt_A58180
0x9E7F06: push    ecx
0x9E7F07: fstp    [esp+4+var_4]; float
0x9E7F0A: push    offset aFvanitymodea_2; "fVanityModeAutoYDegrees"
0x9E7F0F: mov     ecx, offset unk_B36BB0
0x9E7F14: call    GameSetting_ConstrAndReg_float
0x9E7F19: push    offset sub_A1DE80; void (__cdecl *)()
0x9E7F1E: call    _atexit
0x9E7F23: pop     ecx
0x9E7F24: retn
