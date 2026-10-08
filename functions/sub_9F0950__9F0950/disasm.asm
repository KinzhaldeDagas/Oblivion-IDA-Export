0x9F0950: push    offset aActiveQuests; "Active Quests: "
0x9F0955: push    offset aSmiscactiveque; "sMiscActiveQuests"
0x9F095A: mov     ecx, 0B38540h; self
0x9F095F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0964: push    offset sub_A211A0; void (__cdecl *)()
0x9F0969: call    _atexit
0x9F096E: pop     ecx
0x9F096F: retn
