0x9EFF90: push    offset aQuestCompleted; "Quest completed"
0x9EFF95: push    offset aSquestcomplete; "sQuestCompletedText"
0x9EFF9A: mov     ecx, offset stru_B382D0; self
0x9EFF9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFFA4: push    offset sub_A20CC0; void (__cdecl *)()
0x9EFFA9: call    _atexit
0x9EFFAE: pop     ecx
0x9EFFAF: retn
