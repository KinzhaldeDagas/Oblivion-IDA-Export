0x9F8580: fld1
0x9F8582: push    ecx
0x9F8583: fstp    [esp+4+var_4]; float
0x9F8586: mov     ecx, offset flt_B39AC0
0x9F858B: push    offset aFexpressionstr; "fExpressionStrengthAdd"
0x9F8590: call    GameSetting_ConstrAndReg_float
0x9F8595: push    offset sub_A23190; void (__cdecl *)()
0x9F859A: call    _atexit
0x9F859F: pop     ecx
0x9F85A0: retn
