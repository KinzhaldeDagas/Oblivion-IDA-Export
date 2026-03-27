0x9EC860: fld     ds:flt_A31E2C
0x9EC866: push    ecx
0x9EC867: fstp    [esp+4+var_4]; float
0x9EC86A: push    offset aFpersuasionmin; "fPersuasionMinDispostion"
0x9EC86F: mov     ecx, offset fPersuasionMinDispostion
0x9EC874: call    GameSetting_ConstrAndReg_float
0x9EC879: push    offset sub_A1F900; void (__cdecl *)()
0x9EC87E: call    _atexit
0x9EC883: pop     ecx
0x9EC884: retn
