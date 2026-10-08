0x9F1B00: push    offset aCongratulation; "Congratulations!  You have created a ne"...
0x9F1B05: push    offset aSspellmakingsu; "sSpellmakingSuccess"
0x9F1B0A: mov     ecx, 0B389A8h; self
0x9F1B0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1B14: push    offset sub_A21A70; void (__cdecl *)()
0x9F1B19: call    _atexit
0x9F1B1E: pop     ecx
0x9F1B1F: retn
