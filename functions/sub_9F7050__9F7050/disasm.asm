0x9F7050: push    offset aMouthLipsLarge; "Mouth lips large/small"
0x9F7055: push    offset aSmouthlipslarg; "sMouthlipslarge"
0x9F705A: mov     ecx, offset stru_B39188; self
0x9F705F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7064: push    offset sub_A22A30; void (__cdecl *)()
0x9F7069: call    _atexit
0x9F706E: pop     ecx
0x9F706F: retn
