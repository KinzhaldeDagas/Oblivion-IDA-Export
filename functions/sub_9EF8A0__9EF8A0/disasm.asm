0x9EF8A0: fld1
0x9EF8A2: push    ecx
0x9EF8A3: fstp    [esp+4+var_4]; float
0x9EF8A6: mov     ecx, offset fShockGlowColorB
0x9EF8AB: push    offset aFshockglowco_1; "fShockGlowColorB"
0x9EF8B0: call    GameSetting_ConstrAndReg_float
0x9EF8B5: push    offset sub_A20A20; void (__cdecl *)()
0x9EF8BA: call    _atexit
0x9EF8BF: pop     ecx
0x9EF8C0: retn
