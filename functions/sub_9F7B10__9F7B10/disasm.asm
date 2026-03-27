0x9F7B10: push    offset aYouMustFirst_1; "You must first enter a valid name."
0x9F7B15: push    offset aSnonamecharact; "sNoNameCharacter"
0x9F7B1A: mov     ecx, offset dword_B39438
0x9F7B1F: call    GameSetting_ConstrAndReg
0x9F7B24: push    offset sub_A22F90; void (__cdecl *)()
0x9F7B29: call    _atexit
0x9F7B2E: pop     ecx
0x9F7B2F: retn
