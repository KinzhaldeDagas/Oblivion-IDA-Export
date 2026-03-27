0x9F0870: push    offset aOblivionGatesS; "Oblivion Gates Shut: "
0x9F0875: push    offset aSmiscobliviong; "sMiscOblivionGatesShut"
0x9F087A: mov     ecx, offset dword_B38508
0x9F087F: call    GameSetting_ConstrAndReg
0x9F0884: push    offset sub_A21130; void (__cdecl *)()
0x9F0889: call    _atexit
0x9F088E: pop     ecx
0x9F088F: retn
