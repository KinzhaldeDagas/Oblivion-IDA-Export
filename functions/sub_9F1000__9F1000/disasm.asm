0x9F1000: push    offset aSaving___; "Saving..."
0x9F1005: push    offset aSmenudisplaysh; "sMenuDisplayShortXBoxSaveMessage"
0x9F100A: mov     ecx, offset unk_B386E8
0x9F100F: call    GameSetting_ConstrAndReg
0x9F1014: push    offset sub_A214F0; void (__cdecl *)()
0x9F1019: call    _atexit
0x9F101E: pop     ecx
0x9F101F: retn
