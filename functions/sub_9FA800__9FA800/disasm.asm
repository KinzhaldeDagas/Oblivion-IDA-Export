0x9FA800: fld     ds:flt_A2FE7C
0x9FA806: push    ecx
0x9FA807: fstp    [esp+4+var_4]; float
0x9FA80A: push    offset aFpathpointforc; "fPathPointForceAngleSnapDistance"
0x9FA80F: mov     ecx, offset flt_B3A468
0x9FA814: call    GameSetting_ConstrAndReg_float
0x9FA819: push    offset sub_A24100; void (__cdecl *)()
0x9FA81E: call    _atexit
0x9FA823: pop     ecx
0x9FA824: retn
