0x9F69F0: push    offset aRandom_0; "Random"
0x9F69F5: push    offset aSrandom; "sRandom"
0x9F69FA: mov     ecx, offset dword_B38FF0
0x9F69FF: call    GameSetting_ConstrAndReg
0x9F6A04: push    offset sub_A22700; void (__cdecl *)()
0x9F6A09: call    _atexit
0x9F6A0E: pop     ecx
0x9F6A0F: retn
