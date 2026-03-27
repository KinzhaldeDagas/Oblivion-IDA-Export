0x9EF8D0: push    19h
0x9EF8D2: push    offset aIshocksegments; "iShockSegmentsPerBolt"
0x9EF8D7: mov     ecx, offset iShockSegmentsPerBolt
0x9EF8DC: call    GameSetting_ConstrAndReg
0x9EF8E1: push    offset sub_A20A30; void (__cdecl *)()
0x9EF8E6: call    _atexit
0x9EF8EB: pop     ecx
0x9EF8EC: retn
