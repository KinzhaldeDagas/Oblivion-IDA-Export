0x9DA0A0: push    offset aYouDonTHaveEno; "You don't have enough Magicka"
0x9DA0A5: push    offset aSmagiccastinsu; "sMagicCastInsufficientMagicka"
0x9DA0AA: mov     ecx, offset sMagicCastInsufficientMagicka
0x9DA0AF: call    GameSetting_ConstrAndReg
0x9DA0B4: push    offset sub_A175F0; void (__cdecl *)()
0x9DA0B9: call    _atexit
0x9DA0BE: pop     ecx
0x9DA0BF: retn
