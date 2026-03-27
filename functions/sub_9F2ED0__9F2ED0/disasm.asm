0x9F2ED0: fld     ds:flt_A41724
0x9F2ED6: push    ecx
0x9F2ED7: fstp    [esp+4+var_4]; float
0x9F2EDA: push    offset aFbribecurve; "fBribeCurve"
0x9F2EDF: mov     ecx, offset fBribeCurve
0x9F2EE4: call    GameSetting_ConstrAndReg_float
0x9F2EE9: push    offset sub_A22380; void (__cdecl *)()
0x9F2EEE: call    _atexit
0x9F2EF3: pop     ecx
0x9F2EF4: retn
