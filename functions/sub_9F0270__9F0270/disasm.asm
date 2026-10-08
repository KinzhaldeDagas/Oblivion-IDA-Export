0x9F0270: push    offset aYouVeBeenTryin; "You've been trying too hard, thinking t"...
0x9F0275: push    offset aSlevelup19; "sLevelUp19"
0x9F027A: mov     ecx, offset stru_B38388; self
0x9F027F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0284: push    offset sub_A20E30; void (__cdecl *)()
0x9F0289: call    _atexit
0x9F028E: pop     ecx
0x9F028F: retn
