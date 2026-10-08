0x9F01F0: push    offset aTodayYouSudden; "Today you suddenly realized the life yo"...
0x9F01F5: push    offset aSlevelup15; "sLevelUp15"
0x9F01FA: mov     ecx, offset stru_B38368; self
0x9F01FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0204: push    offset sub_A20DF0; void (__cdecl *)()
0x9F0209: call    _atexit
0x9F020E: pop     ecx
0x9F020F: retn
