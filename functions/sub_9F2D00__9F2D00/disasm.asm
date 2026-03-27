0x9F2D00: push    offset aCreaturesNever; "Creatures never accept a yield!"
0x9F2D05: push    offset aScreaturesdont; "sCreaturesDontYield"
0x9F2D0A: mov     ecx, offset sCreaturesDontYield
0x9F2D0F: call    GameSetting_ConstrAndReg
0x9F2D14: push    offset sub_A222B0; void (__cdecl *)()
0x9F2D19: call    _atexit
0x9F2D1E: pop     ecx
0x9F2D1F: retn
