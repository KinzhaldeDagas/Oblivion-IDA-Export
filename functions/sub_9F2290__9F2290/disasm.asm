0x9F2290: push    offset aDoYouJustWantT; "Do you just want to serve your time?"
0x9F2295: push    offset aSservetimeques; "sServeTimeQuestion"
0x9F229A: mov     ecx, offset MessageBoxServeSentenceText
0x9F229F: call    GameSetting_ConstrAndReg
0x9F22A4: push    offset sub_A21D80; void (__cdecl *)()
0x9F22A9: call    _atexit
0x9F22AE: pop     ecx
0x9F22AF: retn
