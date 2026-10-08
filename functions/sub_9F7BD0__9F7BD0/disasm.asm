0x9F7BD0: push    offset aCompletedQuest; "Completed Quests"
0x9F7BD5: push    offset aSjournaltitl_0; "sJournalTitleCompleted"
0x9F7BDA: mov     ecx, offset stru_B39468; self
0x9F7BDF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7BE4: push    offset sub_A22FF0; void (__cdecl *)()
0x9F7BE9: call    _atexit
0x9F7BEE: pop     ecx
0x9F7BEF: retn
