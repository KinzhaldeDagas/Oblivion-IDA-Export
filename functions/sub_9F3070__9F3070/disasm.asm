0x9F3070: fld     ds:flt_A40360
0x9F3076: push    ecx
0x9F3077: fstp    [esp+4+var_4]; float
0x9F307A: push    offset aFpersuasionr_3; "fPersuasionReactionHatePerk"
0x9F307F: mov     ecx, offset flt_B38E78
0x9F3084: call    GameSetting_ConstrAndReg_float
0x9F3089: push    offset sub_A22410; void (__cdecl *)()
0x9F308E: call    _atexit
0x9F3093: pop     ecx
0x9F3094: retn
