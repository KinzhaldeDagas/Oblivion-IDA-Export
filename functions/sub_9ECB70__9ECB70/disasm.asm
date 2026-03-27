0x9ECB70: fld     ds:flt_A2FE7C
0x9ECB76: push    ecx
0x9ECB77: fstp    [esp+4+var_4]; float
0x9ECB7A: push    offset aFpersuasionm_2; "fPersuasionMaxInput"
0x9ECB7F: mov     ecx, offset fPersuasionMaxInput
0x9ECB84: call    GameSetting_ConstrAndReg_float
0x9ECB89: push    offset sub_A1FA20; void (__cdecl *)()
0x9ECB8E: call    _atexit
0x9ECB93: pop     ecx
0x9ECB94: retn
