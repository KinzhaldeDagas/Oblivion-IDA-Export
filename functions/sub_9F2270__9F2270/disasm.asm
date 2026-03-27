0x9F2270: push    offset aHasAlreadyCaug; " has already caught you."
0x9F2275: push    offset aSnopickpocketa; "sNoPickPocketAgain"
0x9F227A: mov     ecx, offset dword_B38B28
0x9F227F: call    GameSetting_ConstrAndReg
0x9F2284: push    offset sub_A21D70; void (__cdecl *)()
0x9F2289: call    _atexit
0x9F228E: pop     ecx
0x9F228F: retn
