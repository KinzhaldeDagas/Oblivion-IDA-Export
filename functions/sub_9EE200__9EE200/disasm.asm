0x9EE200: fld     ds:flt_A2FAAC
0x9EE206: push    ecx
0x9EE207: fstp    [esp+4+var_4]; float
0x9EE20A: push    offset aFimpactshade_0; "fImpactShaderMinMagnitude"
0x9EE20F: mov     ecx, offset fImpactShaderMinMagnitude
0x9EE214: call    GameSetting_ConstrAndReg_float
0x9EE219: push    offset sub_A20270; void (__cdecl *)()
0x9EE21E: call    _atexit
0x9EE223: pop     ecx
0x9EE224: retn
