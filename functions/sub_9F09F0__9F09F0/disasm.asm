0x9F09F0: push    offset aYouCannotRemov; "You cannot remove Quest Items from your"...
0x9F09F5: push    offset aSdropquestitem; "sDropQuestItemWarning"
0x9F09FA: mov     ecx, offset dword_B38568
0x9F09FF: call    GameSetting_ConstrAndReg
0x9F0A04: push    offset sub_A211F0; void (__cdecl *)()
0x9F0A09: call    _atexit
0x9F0A0E: pop     ecx
0x9F0A0F: retn
