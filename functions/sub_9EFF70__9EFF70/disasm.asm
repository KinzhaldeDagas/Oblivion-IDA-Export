0x9EFF70: push    offset aQuestAdded; "Quest added"
0x9EFF75: push    offset aSquestaddedtex; "sQuestAddedText"
0x9EFF7A: mov     ecx, offset stru_B382C8; self
0x9EFF7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFF84: push    offset sub_A20CB0; void (__cdecl *)()
0x9EFF89: call    _atexit
0x9EFF8E: pop     ecx
0x9EFF8F: retn
