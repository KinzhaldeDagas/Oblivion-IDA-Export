0x9F2F00: fld     ds:fConstant_2
0x9F2F06: push    ecx
0x9F2F07: fstp    [esp+4+var_4]; float
0x9F2F0A: push    offset aFbribescale; "fBribeScale"
0x9F2F0F: mov     ecx, offset fBribeScale
0x9F2F14: call    GameSetting_ConstrAndReg_float
0x9F2F19: push    offset sub_A22390; void (__cdecl *)()
0x9F2F1E: call    _atexit
0x9F2F23: pop     ecx
0x9F2F24: retn
