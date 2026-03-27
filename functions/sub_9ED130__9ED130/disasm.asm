0x9ED130: fld     ds:flt_A5AE5C
0x9ED136: push    ecx
0x9ED137: fstp    [esp+4+var_4]; float
0x9ED13A: push    offset aFbuoyancystone; "fBuoyancyStone"
0x9ED13F: mov     ecx, offset flt_B37A78
0x9ED144: call    GameSetting_ConstrAndReg_float
0x9ED149: push    offset sub_A1FC10; void (__cdecl *)()
0x9ED14E: call    _atexit
0x9ED153: pop     ecx
0x9ED154: retn
