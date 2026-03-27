0x9E7A60: fld     ds:flt_A417B4
0x9E7A66: push    ecx
0x9E7A67: fstp    [esp+4+var_4]; float
0x9E7A6A: push    offset aFaigreetingtim; "fAIGreetingTimer"
0x9E7A6F: mov     ecx, offset flt_B36AE8
0x9E7A74: call    GameSetting_ConstrAndReg_float
0x9E7A79: push    offset sub_A1DCF0; void (__cdecl *)()
0x9E7A7E: call    _atexit
0x9E7A83: pop     ecx
0x9E7A84: retn
