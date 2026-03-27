0x9F0890: push    offset aHorsesOwned; "Horses Owned: "
0x9F0895: push    offset aSmischorsesown; "sMiscHorsesOwned"
0x9F089A: mov     ecx, offset dword_B38510
0x9F089F: call    GameSetting_ConstrAndReg
0x9F08A4: push    offset sub_A21140; void (__cdecl *)()
0x9F08A9: call    _atexit
0x9F08AE: pop     ecx
0x9F08AF: retn
