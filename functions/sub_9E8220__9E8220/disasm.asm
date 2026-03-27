0x9E8220: fld     ds:flt_A57FB8
0x9E8226: push    ecx
0x9E8227: fstp    [esp+4+var_4]; float
0x9E822A: push    offset aFdistanceexter; "fDistanceExteriorReactCombat"
0x9E822F: mov     ecx, offset unk_B36C48
0x9E8234: call    GameSetting_ConstrAndReg_float
0x9E8239: push    offset sub_A1DFB0; void (__cdecl *)()
0x9E823E: call    _atexit
0x9E8243: pop     ecx
0x9E8244: retn
