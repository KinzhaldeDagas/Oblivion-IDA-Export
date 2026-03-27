0x9F1820: push    offset aYouCannotDrink; "You cannot drink any more potions right"...
0x9F1825: push    offset aSmaxpotionsexc; "sMaxPotionsExceeded"
0x9F182A: mov     ecx, offset sMaxPotionsExceeded
0x9F182F: call    GameSetting_ConstrAndReg
0x9F1834: push    offset sub_A21900; void (__cdecl *)()
0x9F1839: call    _atexit
0x9F183E: pop     ecx
0x9F183F: retn
