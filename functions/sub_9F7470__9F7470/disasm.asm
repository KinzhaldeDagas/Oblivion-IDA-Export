0x9F7470: push    offset aEyelidsLightDa; "Eyelids light/dark"
0x9F7475: push    offset aSeyelidslight; "sEyelidslight"
0x9F747A: mov     ecx, offset dword_B39290
0x9F747F: call    GameSetting_ConstrAndReg
0x9F7484: push    offset sub_A22C40; void (__cdecl *)()
0x9F7489: call    _atexit
0x9F748E: pop     ecx
0x9F748F: retn
