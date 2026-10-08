0x9F0150: push    offset aYouWokeTodayWi; "You woke today with a new sense of purp"...
0x9F0155: push    offset aSlevelup10; "sLevelUp10"
0x9F015A: mov     ecx, offset stru_B38340; self
0x9F015F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0164: push    offset sub_A20DA0; void (__cdecl *)()
0x9F0169: call    _atexit
0x9F016E: pop     ecx
0x9F016F: retn
