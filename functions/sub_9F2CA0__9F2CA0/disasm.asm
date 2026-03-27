0x9F2CA0: push    offset aYouDoNotHave_0; "You do not have enough gold."
0x9F2CA5: push    offset aSnotenoughgold; "sNotEnoughGold"
0x9F2CAA: mov     ecx, offset sNotEnoughGold
0x9F2CAF: call    GameSetting_ConstrAndReg
0x9F2CB4: push    offset sub_A22280; void (__cdecl *)()
0x9F2CB9: call    _atexit
0x9F2CBE: pop     ecx
0x9F2CBF: retn
