0x9EB1B0: push    23h ; '#'
0x9EB1B2: push    offset aIperkheavyar_0; "iPerkHeavyArmorSinkSum"
0x9EB1B7: mov     ecx, offset iPerkHeavyArmorSinkSum
0x9EB1BC: call    GameSetting_ConstrAndReg
0x9EB1C1: push    offset sub_A1F0B0; void (__cdecl *)()
0x9EB1C6: call    _atexit
0x9EB1CB: pop     ecx
0x9EB1CC: retn
