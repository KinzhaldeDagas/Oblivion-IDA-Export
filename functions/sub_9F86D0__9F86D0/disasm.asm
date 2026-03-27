0x9F86D0: fld     ds:flt_A5793C
0x9F86D6: push    ecx
0x9F86D7: fstp    [esp+4+var_4]; float
0x9F86DA: push    offset aFtrackxy; "fTrackXY"
0x9F86DF: mov     ecx, offset flt_B39AF8
0x9F86E4: call    GameSetting_ConstrAndReg_float
0x9F86E9: push    offset sub_A23200; void (__cdecl *)()
0x9F86EE: call    _atexit
0x9F86F3: pop     ecx
0x9F86F4: retn
