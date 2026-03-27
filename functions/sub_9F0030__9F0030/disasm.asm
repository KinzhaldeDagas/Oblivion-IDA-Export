0x9F0030: push    offset aYouHaveAscende; "You have ascended to level"
0x9F0035: push    offset aStitletext; "sTitleText"
0x9F003A: mov     ecx, offset dword_B382F8
0x9F003F: call    GameSetting_ConstrAndReg
0x9F0044: push    offset sub_A20D10; void (__cdecl *)()
0x9F0049: call    _atexit
0x9F004E: pop     ecx
0x9F004F: retn
