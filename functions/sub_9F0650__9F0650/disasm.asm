0x9F0650: push    offset aSoulsTrapped; "Souls Trapped: "
0x9F0655: push    offset aSmiscsoulstrap; "sMiscSoulsTrapped"
0x9F065A: mov     ecx, offset sMiscSoulsTrapped
0x9F065F: call    GameSetting_ConstrAndReg
0x9F0664: push    offset sub_A21020; void (__cdecl *)()
0x9F0669: call    _atexit
0x9F066E: pop     ecx
0x9F066F: retn
