0x9EB380: push    2Dh ; '-'
0x9EB382: push    offset aIhorseturndegr; "iHorseTurnDegreesPerSecond"
0x9EB387: mov     ecx, offset iHorseTurnDegreesPerSecond
0x9EB38C: call    GameSetting_ConstrAndReg
0x9EB391: push    offset sub_A1F150; void (__cdecl *)()
0x9EB396: call    _atexit
0x9EB39B: pop     ecx
0x9EB39C: retn
