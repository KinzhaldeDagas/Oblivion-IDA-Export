0x9F2E70: fld1
0x9F2E72: push    ecx
0x9F2E73: fstp    [esp+4+var_4]; float
0x9F2E76: mov     ecx, offset fPersuasionCurve
0x9F2E7B: push    offset aFpersuasioncur; "fPersuasionCurve"
0x9F2E80: call    GameSetting_ConstrAndReg_float
0x9F2E85: push    offset sub_A22360; void (__cdecl *)()
0x9F2E8A: call    _atexit
0x9F2E8F: pop     ecx
0x9F2E90: retn
