0x9F85E0: fld     ds:flt_A3D9A4
0x9F85E6: push    ecx
0x9F85E7: fstp    [esp+4+var_4]; float
0x9F85EA: push    offset aFblinkdowntime; "fBlinkDownTime"
0x9F85EF: mov     ecx, offset flt_B39AD0
0x9F85F4: call    GameSetting_ConstrAndReg_float
0x9F85F9: push    offset sub_A231B0; void (__cdecl *)()
0x9F85FE: call    _atexit
0x9F8603: pop     ecx
0x9F8604: retn
