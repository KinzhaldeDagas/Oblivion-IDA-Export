0x9FA7A0: fld     ds:flt_A417B4
0x9FA7A6: push    ecx
0x9FA7A7: fstp    [esp+4+var_4]; float
0x9FA7AA: push    offset aFpathpointreac; "fPathPointReachDistance"
0x9FA7AF: mov     ecx, offset flt_B3A458
0x9FA7B4: call    GameSetting_ConstrAndReg_float
0x9FA7B9: push    offset sub_A240E0; void (__cdecl *)()
0x9FA7BE: call    _atexit
0x9FA7C3: pop     ecx
0x9FA7C4: retn
