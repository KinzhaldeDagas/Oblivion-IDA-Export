0x9F7BF0: push    offset aCompletedQue_0; "Completed Quest Detail"
0x9F7BF5: push    offset aSjournaltitl_1; "sJournalTitleCompletedDetails"
0x9F7BFA: mov     ecx, offset stru_B39470; self
0x9F7BFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7C04: push    offset sub_A23000; void (__cdecl *)()
0x9F7C09: call    _atexit
0x9F7C0E: pop     ecx
0x9F7C0F: retn
