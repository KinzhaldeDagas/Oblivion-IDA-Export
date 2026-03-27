0x9E6D90: fldz
0x9E6D92: push    ecx
0x9E6D93: fstp    [esp+4+var_4]; float
0x9E6D96: mov     ecx, offset fAiAquireStealBase
0x9E6D9B: push    offset aFaiaquiresteal; "fAiAquireStealBase"
0x9E6DA0: call    GameSetting_ConstrAndReg_float
0x9E6DA5: push    offset sub_A1D880; void (__cdecl *)()
0x9E6DAA: call    _atexit
0x9E6DAF: pop     ecx
0x9E6DB0: retn
