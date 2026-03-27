0x9F7BB0: push    offset aCurrentQuests; "Current Quests"
0x9F7BB5: push    offset aSjournaltitlec; "sJournalTitleCurrent"
0x9F7BBA: mov     ecx, offset dword_B39460
0x9F7BBF: call    GameSetting_ConstrAndReg
0x9F7BC4: push    offset sub_A22FE0; void (__cdecl *)()
0x9F7BC9: call    _atexit
0x9F7BCE: pop     ecx
0x9F7BCF: retn
