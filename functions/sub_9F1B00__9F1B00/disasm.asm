0x9F1B00: push    offset aCongratulation; "Congratulations!  You have created a ne"...
0x9F1B05: push    offset aSspellmakingsu; "sSpellmakingSuccess"
0x9F1B0A: mov     ecx, offset sSpellmakingSuccess
0x9F1B0F: call    GameSetting_ConstrAndReg
0x9F1B14: push    offset sub_A21A70; void (__cdecl *)()
0x9F1B19: call    _atexit
0x9F1B1E: pop     ecx
0x9F1B1F: retn
