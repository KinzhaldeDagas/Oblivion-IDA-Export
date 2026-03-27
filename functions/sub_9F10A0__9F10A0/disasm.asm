0x9F10A0: push    offset aQuicksave_0; "Quicksave"
0x9F10A5: push    offset aSmenudisplayqu; "sMenuDisplayQuicksaveName"
0x9F10AA: mov     ecx, offset dword_B38710
0x9F10AF: call    GameSetting_ConstrAndReg
0x9F10B4: push    offset sub_A21540; void (__cdecl *)()
0x9F10B9: call    _atexit
0x9F10BE: pop     ecx
0x9F10BF: retn
