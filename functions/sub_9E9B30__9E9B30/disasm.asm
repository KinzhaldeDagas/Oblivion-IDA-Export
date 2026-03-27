0x9E9B30: fld     ds:flt_A5905C
0x9E9B36: push    ecx
0x9E9B37: fstp    [esp+4+var_4]; float
0x9E9B3A: push    offset aFarrowweakgrav; "fArrowWeakGravity"
0x9E9B3F: mov     ecx, offset flt_B37098
0x9E9B44: call    GameSetting_ConstrAndReg_float
0x9E9B49: push    offset sub_A1E850; void (__cdecl *)()
0x9E9B4E: call    _atexit
0x9E9B53: pop     ecx
0x9E9B54: retn
