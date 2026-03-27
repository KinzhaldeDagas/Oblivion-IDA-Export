0x9E9270: fld     ds:flt_A2FFE8
0x9E9276: push    ecx
0x9E9277: fstp    [esp+4+var_4]; float
0x9E927A: push    offset aFcombatdistanc; "fCombatDistance"
0x9E927F: mov     ecx, offset fCombatDistance
0x9E9284: call    GameSetting_ConstrAndReg_float
0x9E9289: push    offset sub_A1E560; void (__cdecl *)()
0x9E928E: call    _atexit
0x9E9293: pop     ecx
0x9E9294: retn
