0x9F7B90: push    offset aActiveQuest; "Active Quest"
0x9F7B95: push    offset aSjournaltitlea; "sJournalTitleActive"
0x9F7B9A: mov     ecx, offset stru_B39458; self
0x9F7B9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7BA4: push    offset sub_A22FD0; void (__cdecl *)()
0x9F7BA9: call    _atexit
0x9F7BAE: pop     ecx
0x9F7BAF: retn
