0x9F9F60: push    offset aSpeechcraftDes; "Speechcraft Description"
0x9F9F65: push    offset aSskilldescspee; "sSkillDescSpeechcraft"
0x9F9F6A: mov     ecx, 0B3A274h; self
0x9F9F6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9F74: push    offset sub_A23D20; void (__cdecl *)()
0x9F9F79: call    _atexit
0x9F9F7E: pop     ecx
0x9F9F7F: retn
