0x9ED310: fld1
0x9ED312: push    ecx
0x9ED313: fstp    [esp+4+var_4]; float
0x9ED316: mov     ecx, offset flt_B37AC8
0x9ED31B: push    offset aFbuoyancymultb; "fBuoyancyMultBody"
0x9ED320: call    GameSetting_ConstrAndReg_float
0x9ED325: push    offset sub_A1FCB0; void (__cdecl *)()
0x9ED32A: call    _atexit
0x9ED32F: pop     ecx
0x9ED330: retn
