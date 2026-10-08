0x9F7BB0: push    offset aCurrentQuests; "Current Quests"
0x9F7BB5: push    offset aSjournaltitlec; "sJournalTitleCurrent"
0x9F7BBA: mov     ecx, offset stru_B39460; self
0x9F7BBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7BC4: push    offset sub_A22FE0; void (__cdecl *)()
0x9F7BC9: call    _atexit
0x9F7BCE: pop     ecx
0x9F7BCF: retn
