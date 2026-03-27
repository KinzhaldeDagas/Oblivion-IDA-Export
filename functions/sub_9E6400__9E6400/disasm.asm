0x9E6400: fld     ds:flt_A5739C
0x9E6406: push    ecx
0x9E6407: fstp    [esp+4+var_4]; float
0x9E640A: push    offset aFsneakmaxdista; "fSneakMaxDistance"
0x9E640F: mov     ecx, offset fSneakMaxDistance
0x9E6414: call    GameSetting_ConstrAndReg_float
0x9E6419: push    offset sub_A1D530; void (__cdecl *)()
0x9E641E: call    _atexit
0x9E6423: pop     ecx
0x9E6424: retn
