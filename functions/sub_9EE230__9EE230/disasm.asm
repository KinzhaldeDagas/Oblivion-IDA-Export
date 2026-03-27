0x9EE230: fld     ds:flt_A31E2C
0x9EE236: push    ecx
0x9EE237: fstp    [esp+4+var_4]; float
0x9EE23A: push    offset aFimpactshade_1; "fImpactShaderMaxMagnitude"
0x9EE23F: mov     ecx, offset fImpactShaderMaxMagnitude
0x9EE244: call    GameSetting_ConstrAndReg_float
0x9EE249: push    offset sub_A20280; void (__cdecl *)()
0x9EE24E: call    _atexit
0x9EE253: pop     ecx
0x9EE254: retn
