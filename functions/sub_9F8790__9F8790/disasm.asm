0x9F8790: fld     ds:flt_A417B4
0x9F8796: push    ecx
0x9F8797: fstp    [esp+4+var_4]; float
0x9F879A: push    offset aFtrackeyez; "fTrackEyeZ"
0x9F879F: mov     ecx, offset flt_B39B18
0x9F87A4: call    GameSetting_ConstrAndReg_float
0x9F87A9: push    offset sub_A23240; void (__cdecl *)()
0x9F87AE: call    _atexit
0x9F87B3: pop     ecx
0x9F87B4: retn
