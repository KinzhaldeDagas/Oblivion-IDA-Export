0x9ED400: fld     ds:fConstant_2
0x9ED406: push    ecx
0x9ED407: fstp    [esp+4+var_4]; float
0x9ED40A: push    offset aFsubmergedline; "fSubmergedLinearDampingH"
0x9ED40F: mov     ecx, offset flt_B37AF0
0x9ED414: call    GameSetting_ConstrAndReg_float
0x9ED419: push    offset sub_A1FD00; void (__cdecl *)()
0x9ED41E: call    _atexit
0x9ED423: pop     ecx
0x9ED424: retn
