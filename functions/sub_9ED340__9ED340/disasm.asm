0x9ED340: fld     ds:flt_A575D0
0x9ED346: push    ecx
0x9ED347: fstp    [esp+4+var_4]; float
0x9ED34A: push    offset aFbuoyancymulte; "fBuoyancyMultExtremity"
0x9ED34F: mov     ecx, offset fBuoyancyMultExtremity
0x9ED354: call    GameSetting_ConstrAndReg_float
0x9ED359: push    offset sub_A1FCC0; void (__cdecl *)()
0x9ED35E: call    _atexit
0x9ED363: pop     ecx
0x9ED364: retn
