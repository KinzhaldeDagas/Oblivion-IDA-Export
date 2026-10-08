0x9F08F0: push    offset aDaysAsAVampire; "Days as a Vampire: "
0x9F08F5: push    offset aSmiscdaysasava; "sMiscDaysAsAVampire"
0x9F08FA: mov     ecx, offset stru_B38528; self
0x9F08FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0904: push    offset sub_A21170; void (__cdecl *)()
0x9F0909: call    _atexit
0x9F090E: pop     ecx
0x9F090F: retn
