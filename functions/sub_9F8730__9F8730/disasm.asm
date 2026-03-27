0x9F8730: fld     ds:flt_A5793C
0x9F8736: push    ecx
0x9F8737: fstp    [esp+4+var_4]; float
0x9F873A: push    offset aFtrackmaxz; "fTrackMaxZ"
0x9F873F: mov     ecx, offset flt_B39B08
0x9F8744: call    GameSetting_ConstrAndReg_float
0x9F8749: push    offset sub_A23220; void (__cdecl *)()
0x9F874E: call    _atexit
0x9F8753: pop     ecx
0x9F8754: retn
