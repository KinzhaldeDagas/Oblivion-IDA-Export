0x9F7B90: push    offset aActiveQuest; "Active Quest"
0x9F7B95: push    offset aSjournaltitlea; "sJournalTitleActive"
0x9F7B9A: mov     ecx, offset dword_B39458
0x9F7B9F: call    GameSetting_ConstrAndReg
0x9F7BA4: push    offset sub_A22FD0; void (__cdecl *)()
0x9F7BA9: call    _atexit
0x9F7BAE: pop     ecx
0x9F7BAF: retn
