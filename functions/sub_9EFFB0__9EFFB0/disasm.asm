0x9EFFB0: push    offset aQuestUpdated; "Quest updated"
0x9EFFB5: push    offset aSquestupdatedt; "sQuestUpdatedText"
0x9EFFBA: mov     ecx, 0B382D8h; self
0x9EFFBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFFC4: push    offset sub_A20CD0; void (__cdecl *)()
0x9EFFC9: call    _atexit
0x9EFFCE: pop     ecx
0x9EFFCF: retn
