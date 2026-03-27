0x9ECBD0: fld     ds:flt_A379CC
0x9ECBD6: push    ecx
0x9ECBD7: fstp    [esp+4+var_4]; float
0x9ECBDA: push    offset aFpersuasionm_4; "fPersuasionMinPercentCircle"
0x9ECBDF: mov     ecx, offset fPersuasionMinPercentCircle
0x9ECBE4: call    GameSetting_ConstrAndReg_float
0x9ECBE9: push    offset sub_A1FA40; void (__cdecl *)()
0x9ECBEE: call    _atexit
0x9ECBF3: pop     ecx
0x9ECBF4: retn
