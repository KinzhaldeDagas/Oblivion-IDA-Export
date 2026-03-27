0x9E9B60: fld     ds:flt_A37CC8
0x9E9B66: push    ecx
0x9E9B67: fstp    [esp+4+var_4]; float
0x9E9B6A: push    offset aFarrowfovzoom; "fArrowFOVZoom"
0x9E9B6F: mov     ecx, offset flt_B370A0
0x9E9B74: call    GameSetting_ConstrAndReg_float
0x9E9B79: push    offset sub_A1E860; void (__cdecl *)()
0x9E9B7E: call    _atexit
0x9E9B83: pop     ecx
0x9E9B84: retn
