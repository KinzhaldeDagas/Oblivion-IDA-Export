0x9E7DE0: fld     ds:g_DialogueFov?
0x9E7DE6: push    ecx
0x9E7DE7: fstp    [esp+4+var_4]; float
0x9E7DEA: push    offset aFvanitymodew_3; "fVanityModeWheelDeadMin"
0x9E7DEF: mov     ecx, offset flt_B36B80
0x9E7DF4: call    GameSetting_ConstrAndReg_float
0x9E7DF9: push    offset sub_A1DE20; void (__cdecl *)()
0x9E7DFE: call    _atexit
0x9E7E03: pop     ecx
0x9E7E04: retn
