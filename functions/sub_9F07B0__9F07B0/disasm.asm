0x9F07B0: push    offset aJokesTold; "Jokes Told: "
0x9F07B5: push    offset aSmiscjokestold; "sMiscJokesTold"
0x9F07BA: mov     ecx, offset stru_B384D8; self
0x9F07BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F07C4: push    offset sub_A210D0; void (__cdecl *)()
0x9F07C9: call    _atexit
0x9F07CE: pop     ecx
0x9F07CF: retn
