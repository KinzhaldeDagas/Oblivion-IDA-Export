0x9EFFD0: push    offset aNewTopic; Registers Oblivion string setting sTopicAddedText with default value 'New topic'; PlayerCharacter::AddKnownTopic prefixes notification text with this setting.
0x9EFFD5: push    offset aStopicaddedtex; "sTopicAddedText"
0x9EFFDA: mov     ecx, 0B382E0h; self
0x9EFFDF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFFE4: push    offset sub_A20CE0; void (__cdecl *)()
0x9EFFE9: call    _atexit
0x9EFFEE: pop     ecx
0x9EFFEF: retn
