0x9F8700: fld     ds:flt_A643F8
0x9F8706: push    ecx
0x9F8707: fstp    [esp+4+var_4]; float
0x9F870A: push    offset aFtrackminz; "fTrackMinZ"
0x9F870F: mov     ecx, offset flt_B39B00
0x9F8714: call    GameSetting_ConstrAndReg_float
0x9F8719: push    offset sub_A23210; void (__cdecl *)()
0x9F871E: call    _atexit
0x9F8723: pop     ecx
0x9F8724: retn
