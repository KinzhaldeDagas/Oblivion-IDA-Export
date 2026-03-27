0x9F1300: push    offset aYouCanTQuicklo; "You can't Quickload while the game is p"...
0x9F1305: push    offset aScantquickload; "sCantQuickLoad"
0x9F130A: mov     ecx, offset dword_B387A8
0x9F130F: call    GameSetting_ConstrAndReg
0x9F1314: push    offset sub_A21670; void (__cdecl *)()
0x9F1319: call    _atexit
0x9F131E: pop     ecx
0x9F131F: retn
