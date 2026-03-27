0x9F8760: fld     ds:flt_A64414
0x9F8766: push    ecx
0x9F8767: fstp    [esp+4+var_4]; float
0x9F876A: push    offset aFtrackeyexy; "fTrackEyeXY"
0x9F876F: mov     ecx, offset flt_B39B10
0x9F8774: call    GameSetting_ConstrAndReg_float
0x9F8779: push    offset sub_A23230; void (__cdecl *)()
0x9F877E: call    _atexit
0x9F8783: pop     ecx
0x9F8784: retn
