0x9ED250: fld     ds:flt_A41328
0x9ED256: push    ecx
0x9ED257: fstp    [esp+4+var_4]; float
0x9ED25A: push    offset aFbuoyancyorgan; "fBuoyancyOrganic"
0x9ED25F: mov     ecx, offset flt_B37AA8
0x9ED264: call    GameSetting_ConstrAndReg_float
0x9ED269: push    offset sub_A1FC70; void (__cdecl *)()
0x9ED26E: call    _atexit
0x9ED273: pop     ecx
0x9ED274: retn
