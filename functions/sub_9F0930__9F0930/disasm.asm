0x9F0930: push    offset aNirnrootsFound; "Nirnroots Found: "
0x9F0935: push    offset aSmiscnirnroots; "sMiscNirnrootsFound"
0x9F093A: mov     ecx, offset sMiscNirnrootsFound
0x9F093F: call    GameSetting_ConstrAndReg
0x9F0944: push    offset sub_A21190; void (__cdecl *)()
0x9F0949: call    _atexit
0x9F094E: pop     ecx
0x9F094F: retn
