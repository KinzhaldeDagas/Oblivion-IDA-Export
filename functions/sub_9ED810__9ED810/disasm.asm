0x9ED810: fldz
0x9ED812: push    ecx
0x9ED813: fstp    [esp+4+var_4]; float
0x9ED816: mov     ecx, offset flt_B37BA0
0x9ED81B: push    offset aFclothingbase; "fClothingBase"
0x9ED820: call    GameSetting_ConstrAndReg_float
0x9ED825: push    offset sub_A1FE60; void (__cdecl *)()
0x9ED82A: call    _atexit
0x9ED82F: pop     ecx
0x9ED830: retn
