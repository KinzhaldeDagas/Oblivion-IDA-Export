0x9F2050: push    offset aYouCannotSleep; "You cannot sleep while trespassing."
0x9F2055: push    offset aSnosleeptrespa; "sNoSleepTrespass"
0x9F205A: mov     ecx, offset stru_B38AA0; self
0x9F205F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2064: push    offset sub_A21C60; void (__cdecl *)()
0x9F2069: call    _atexit
0x9F206E: pop     ecx
0x9F206F: retn
