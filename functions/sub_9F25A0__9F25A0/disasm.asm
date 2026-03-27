0x9F25A0: push    offset aYouCannotGoTha; "You cannot go that way."
0x9F25A5: push    offset aSplayerleaving; "sPlayerLeavingBorderRegion"
0x9F25AA: mov     ecx, offset dword_B38BF0
0x9F25AF: call    GameSetting_ConstrAndReg
0x9F25B4: push    offset sub_A21F00; void (__cdecl *)()
0x9F25B9: call    _atexit
0x9F25BE: pop     ecx
0x9F25BF: retn
