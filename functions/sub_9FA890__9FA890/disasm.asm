0x9FA890: fld     ds:flt_A3D8F0
0x9FA896: push    ecx
0x9FA897: fstp    [esp+4+var_4]; float
0x9FA89A: push    offset aFpathpointturn; "fPathPointTurnDistanceExterior"
0x9FA89F: mov     ecx, offset unk_B3A480
0x9FA8A4: call    GameSetting_ConstrAndReg_float
0x9FA8A9: push    offset sub_A24130; void (__cdecl *)()
0x9FA8AE: call    _atexit
0x9FA8B3: pop     ecx
0x9FA8B4: retn
