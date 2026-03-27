0x9E79A0: fld     ds:flt_A34A80
0x9E79A6: push    ecx
0x9E79A7: fstp    [esp+4+var_4]; float
0x9E79AA: push    offset aFaibestheadtra; "fAIBestHeadTrackDistance"
0x9E79AF: mov     ecx, offset flt_B36AC8
0x9E79B4: call    GameSetting_ConstrAndReg_float
0x9E79B9: push    offset sub_A1DCB0; void (__cdecl *)()
0x9E79BE: call    _atexit
0x9E79C3: pop     ecx
0x9E79C4: retn
