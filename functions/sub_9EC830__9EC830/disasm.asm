0x9EC830: fld     ds:flt_A31C80
0x9EC836: push    ecx
0x9EC837: fstp    [esp+4+var_4]; float
0x9EC83A: push    offset aFpersuasionsha; "fPersuasionShape"
0x9EC83F: mov     ecx, offset fPersuasionShape
0x9EC844: call    GameSetting_ConstrAndReg_float
0x9EC849: push    offset sub_A1F8F0; void (__cdecl *)()
0x9EC84E: call    _atexit
0x9EC853: pop     ecx
0x9EC854: retn
