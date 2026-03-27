0x9F15E0: push    offset aYouHaveRunOutO; "You have run out of hammers."
0x9F15E5: push    offset aSnohammer; "sNoHammer"
0x9F15EA: mov     ecx, offset dword_B38860
0x9F15EF: call    GameSetting_ConstrAndReg
0x9F15F4: push    offset sub_A217E0; void (__cdecl *)()
0x9F15F9: call    _atexit
0x9F15FE: pop     ecx
0x9F15FF: retn
