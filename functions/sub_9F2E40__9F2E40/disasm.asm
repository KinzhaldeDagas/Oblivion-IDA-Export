0x9F2E40: fld     ds:flt_A2FAAC
0x9F2E46: push    ecx
0x9F2E47: fstp    [esp+4+var_4]; float
0x9F2E4A: push    offset aFpersuasionmod; "fPersuasionMod"
0x9F2E4F: mov     ecx, offset fPersuasionMod
0x9F2E54: call    GameSetting_ConstrAndReg_float
0x9F2E59: push    offset sub_A22350; void (__cdecl *)()
0x9F2E5E: call    _atexit
0x9F2E63: pop     ecx
0x9F2E64: retn
