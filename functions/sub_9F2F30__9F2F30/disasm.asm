0x9F2F30: fld     ds:flt_A35AA4
0x9F2F36: push    ecx
0x9F2F37: fstp    [esp+4+var_4]; float
0x9F2F3A: push    offset aFbribecostcurv; "fBribeCostCurve"
0x9F2F3F: mov     ecx, offset fBribeCostCurve
0x9F2F44: call    GameSetting_ConstrAndReg_float
0x9F2F49: push    offset sub_A223A0; void (__cdecl *)()
0x9F2F4E: call    _atexit
0x9F2F53: pop     ecx
0x9F2F54: retn
