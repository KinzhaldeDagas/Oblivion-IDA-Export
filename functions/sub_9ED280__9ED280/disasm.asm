0x9ED280: fld     ds:flt_A41328
0x9ED286: push    ecx
0x9ED287: fstp    [esp+4+var_4]; float
0x9ED28A: push    offset aFbuoyancyskin; "fBuoyancySkin"
0x9ED28F: mov     ecx, offset flt_B37AB0
0x9ED294: call    GameSetting_ConstrAndReg_float
0x9ED299: push    offset sub_A1FC80; void (__cdecl *)()
0x9ED29E: call    _atexit
0x9ED2A3: pop     ecx
0x9ED2A4: retn
