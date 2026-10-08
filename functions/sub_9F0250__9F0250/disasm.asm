0x9F0250: push    offset aTodayYouSudden; "Today you suddenly realized the life yo"...
0x9F0255: push    offset aSlevelup18; "sLevelUp18"
0x9F025A: mov     ecx, offset stru_B38380; self
0x9F025F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0264: push    offset sub_A20E20; void (__cdecl *)()
0x9F0269: call    _atexit
0x9F026E: pop     ecx
0x9F026F: retn
