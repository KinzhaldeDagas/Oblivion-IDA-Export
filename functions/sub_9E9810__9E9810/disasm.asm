0x9E9810: fld     ds:flt_A468FC
0x9E9816: push    ecx
0x9E9817: fstp    [esp+4+var_4]; float
0x9E981A: push    offset aFmarksmanfatig; "fMarksmanFatigueBurnPerSecond"
0x9E981F: mov     ecx, offset fMarksmanFatigueBurnPerSecond
0x9E9824: call    GameSetting_ConstrAndReg_float
0x9E9829: push    offset sub_A1E740; void (__cdecl *)()
0x9E982E: call    _atexit
0x9E9833: pop     ecx
0x9E9834: retn
