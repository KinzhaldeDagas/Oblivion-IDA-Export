0x9F08B0: push    offset aHousesOwned; "Houses Owned: "
0x9F08B5: push    offset aSmischousesown; "sMiscHousesOwned"
0x9F08BA: mov     ecx, offset dword_B38518
0x9F08BF: call    GameSetting_ConstrAndReg
0x9F08C4: push    offset sub_A21150; void (__cdecl *)()
0x9F08C9: call    _atexit
0x9F08CE: pop     ecx
0x9F08CF: retn
