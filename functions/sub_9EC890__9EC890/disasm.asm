0x9EC890: fld     ds:flt_A3D8F0
0x9EC896: push    ecx
0x9EC897: fstp    [esp+4+var_4]; float
0x9EC89A: push    offset aFpersuasionmax; "fPersuasionMaxDisposition"
0x9EC89F: mov     ecx, offset fPersuasionMaxDisposition
0x9EC8A4: call    GameSetting_ConstrAndReg_float
0x9EC8A9: push    offset sub_A1F910; void (__cdecl *)()
0x9EC8AE: call    _atexit
0x9EC8B3: pop     ecx
0x9EC8B4: retn
