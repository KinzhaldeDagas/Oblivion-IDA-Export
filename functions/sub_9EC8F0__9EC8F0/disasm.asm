0x9EC8F0: fld     ds:flt_A47E6C
0x9EC8F6: push    ecx
0x9EC8F7: fstp    [esp+4+var_4]; float
0x9EC8FA: push    offset aFpersuasionb_0; "fPersuasionBaseValueMinDispostion"
0x9EC8FF: mov     ecx, offset fPersuasionBaseValueMinDispostion
0x9EC904: call    GameSetting_ConstrAndReg_float
0x9EC909: push    offset sub_A1F930; void (__cdecl *)()
0x9EC90E: call    _atexit
0x9EC913: pop     ecx
0x9EC914: retn
