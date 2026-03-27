0x9FA7D0: fld     ds:flt_A34A80
0x9FA7D6: push    ecx
0x9FA7D7: fstp    [esp+4+var_4]; float
0x9FA7DA: push    offset aFroadpointreac; "fRoadPointReachDistance"
0x9FA7DF: mov     ecx, offset flt_B3A460
0x9FA7E4: call    GameSetting_ConstrAndReg_float
0x9FA7E9: push    offset sub_A240F0; void (__cdecl *)()
0x9FA7EE: call    _atexit
0x9FA7F3: pop     ecx
0x9FA7F4: retn
