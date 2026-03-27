0x9E7DB0: fld     ds:flt_A34ABC
0x9E7DB6: push    ecx
0x9E7DB7: fstp    [esp+4+var_4]; float
0x9E7DBA: push    offset aFvanitymodefor; "fVanityModeForceDefault"
0x9E7DBF: mov     ecx, offset flt_B36B78
0x9E7DC4: call    GameSetting_ConstrAndReg_float
0x9E7DC9: push    offset sub_A1DE10; void (__cdecl *)()
0x9E7DCE: call    _atexit
0x9E7DD3: pop     ecx
0x9E7DD4: retn
