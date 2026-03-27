0x9F7B30: push    offset aEnterCharacter; "Enter character name."
0x9F7B35: push    offset aSentername; "sEnterName"
0x9F7B3A: mov     ecx, offset dword_B39440
0x9F7B3F: call    GameSetting_ConstrAndReg
0x9F7B44: push    offset sub_A22FA0; void (__cdecl *)()
0x9F7B49: call    _atexit
0x9F7B4E: pop     ecx
0x9F7B4F: retn
