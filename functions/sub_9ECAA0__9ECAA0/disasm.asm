0x9ECAA0: fld     ds:flt_A2FE7C
0x9ECAA6: push    ecx
0x9ECAA7: fstp    [esp+4+var_4]; float
0x9ECAAA: push    offset aFpersuasionm_1; "fPersuasionMaxSelect"
0x9ECAAF: mov     ecx, offset fPersuasionMaxSelect
0x9ECAB4: call    GameSetting_ConstrAndReg_float
0x9ECAB9: push    offset sub_A1F9C0; void (__cdecl *)()
0x9ECABE: call    _atexit
0x9ECAC3: pop     ecx
0x9ECAC4: retn
