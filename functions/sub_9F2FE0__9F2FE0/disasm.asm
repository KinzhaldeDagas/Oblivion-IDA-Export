0x9F2FE0: fld     ds:flt_A3D8F0
0x9F2FE6: push    ecx
0x9F2FE7: fstp    [esp+4+var_4]; float
0x9F2FEA: push    offset aFpersuasionr_0; "fPersuasionReactionLike"
0x9F2FEF: mov     ecx, offset fPersuasionReactionLike
0x9F2FF4: call    GameSetting_ConstrAndReg_float
0x9F2FF9: push    offset sub_A223E0; void (__cdecl *)()
0x9F2FFE: call    _atexit
0x9F3003: pop     ecx
0x9F3004: retn
