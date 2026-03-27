0x9F2860: push    offset aAreYouSureYo_7; "Are you sure you want to exit the game?"...
0x9F2865: push    offset aSquitpastmainm; "sQuitPastMainMenu"
0x9F286A: mov     ecx, offset unk_B38CA0
0x9F286F: call    GameSetting_ConstrAndReg
0x9F2874: push    offset sub_A22060; void (__cdecl *)()
0x9F2879: call    _atexit
0x9F287E: pop     ecx
0x9F287F: retn
