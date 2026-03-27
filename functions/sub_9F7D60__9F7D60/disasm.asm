0x9F7D60: push    offset aYouCanNotEatQu; "You can not eat quest items."
0x9F7D65: push    offset aSnoeatquestite; "sNoEatQuestItem"
0x9F7D6A: mov     ecx, offset sNoEatQuestItem
0x9F7D6F: call    GameSetting_ConstrAndReg
0x9F7D74: push    offset sub_A230A0; void (__cdecl *)()
0x9F7D79: call    _atexit
0x9F7D7E: pop     ecx
0x9F7D7F: retn
