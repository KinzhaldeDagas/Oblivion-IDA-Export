0x9ED220: fld     ds:flt_A30634
0x9ED226: push    ecx
0x9ED227: fstp    [esp+4+var_4]; float
0x9ED22A: push    offset aFbuoyancymetal; "fBuoyancyMetal"
0x9ED22F: mov     ecx, offset flt_B37AA0
0x9ED234: call    GameSetting_ConstrAndReg_float
0x9ED239: push    offset sub_A1FC60; void (__cdecl *)()
0x9ED23E: call    _atexit
0x9ED243: pop     ecx
0x9ED244: retn
