0x9EF840: fldz
0x9EF842: push    ecx
0x9EF843: fstp    [esp+4+var_4]; float
0x9EF846: mov     ecx, offset fShockGlowColorR
0x9EF84B: push    offset aFshockglowcolo; "fShockGlowColorR"
0x9EF850: call    GameSetting_ConstrAndReg_float
0x9EF855: push    offset sub_A20A00; void (__cdecl *)()
0x9EF85A: call    _atexit
0x9EF85F: pop     ecx
0x9EF860: retn
