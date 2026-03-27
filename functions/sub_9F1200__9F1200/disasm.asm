0x9F1200: push    offset aAreYouSureYo_4; "Are you sure you want to load this game"...
0x9F1205: push    offset aSloadfrommainm; "sLoadFromMainMenu"
0x9F120A: mov     ecx, offset dword_B38768
0x9F120F: call    GameSetting_ConstrAndReg
0x9F1214: push    offset sub_A215F0; void (__cdecl *)()
0x9F1219: call    _atexit
0x9F121E: pop     ecx
0x9F121F: retn
