0x9F2250: push    offset aIsFleeingForTh; " is fleeing for their life."
0x9F2255: push    offset aSnotalkfleeing; "sNoTalkFleeing"
0x9F225A: mov     ecx, offset stru_B38B20; self
0x9F225F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2264: push    offset sub_A21D60; void (__cdecl *)()
0x9F2269: call    _atexit
0x9F226E: pop     ecx
0x9F226F: retn
