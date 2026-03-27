0x9F2490: fld     ds:flt_A3D65C
0x9F2496: push    ecx
0x9F2497: fstp    [esp+4+var_4]; float
0x9F249A: push    offset aFquickkeydownt; "fQuickKeyDownTimer"
0x9F249F: mov     ecx, offset flt_B38BB0
0x9F24A4: call    GameSetting_ConstrAndReg_float
0x9F24A9: push    offset sub_A21E80; void (__cdecl *)()
0x9F24AE: call    _atexit
0x9F24B3: pop     ecx
0x9F24B4: retn
