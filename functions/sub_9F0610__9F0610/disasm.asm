0x9F0610: push    offset aHorsesStolen; "Horses Stolen: "
0x9F0615: push    offset aSmiscnumhorses; "sMiscNumHorsesStolen"
0x9F061A: mov     ecx, offset sMiscNumHorsesStolen
0x9F061F: call    GameSetting_ConstrAndReg
0x9F0624: push    offset sub_A21000; void (__cdecl *)()
0x9F0629: call    _atexit
0x9F062E: pop     ecx
0x9F062F: retn
