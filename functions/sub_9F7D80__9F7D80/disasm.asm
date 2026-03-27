0x9F7D80: push    96h ; '–'
0x9F7D85: push    offset aIquickkeyignor; "iQuickKeyIgnoreMillis"
0x9F7D8A: mov     ecx, offset dword_B394C8
0x9F7D8F: call    GameSetting_ConstrAndReg
0x9F7D94: push    offset sub_A230B0; void (__cdecl *)()
0x9F7D99: call    _atexit
0x9F7D9E: pop     ecx
0x9F7D9F: retn
