0x9F1040: push    offset aPlayTime; "Play Time"
0x9F1045: push    offset aSmenudisplaypl; "sMenuDisplayPlayTime"
0x9F104A: mov     ecx, offset dword_B386F8
0x9F104F: call    GameSetting_ConstrAndReg
0x9F1054: push    offset sub_A21510; void (__cdecl *)()
0x9F1059: call    _atexit
0x9F105E: pop     ecx
0x9F105F: retn
