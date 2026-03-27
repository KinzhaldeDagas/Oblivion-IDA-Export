0x9F2D80: push    offset aCanTSummonWhil; "Can't summon while in water"
0x9F2D85: push    offset aScannotsummoni; "sCanNotSummonInWater"
0x9F2D8A: mov     ecx, offset sCanNotSummonInWater
0x9F2D8F: call    GameSetting_ConstrAndReg
0x9F2D94: push    offset sub_A222F0; void (__cdecl *)()
0x9F2D99: call    _atexit
0x9F2D9E: pop     ecx
0x9F2D9F: retn
