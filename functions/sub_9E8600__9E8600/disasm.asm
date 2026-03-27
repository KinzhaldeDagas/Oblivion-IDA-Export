0x9E8600: fld     ds:flt_A417B4
0x9E8606: push    ecx
0x9E8607: fstp    [esp+4+var_4]; float
0x9E860A: push    offset aFdispinfamymax; "fDispInfamyMax"
0x9E860F: mov     ecx, offset fDispInfamyMax
0x9E8614: call    GameSetting_ConstrAndReg_float
0x9E8619: push    offset sub_A1E110; void (__cdecl *)()
0x9E861E: call    _atexit
0x9E8623: pop     ecx
0x9E8624: retn
