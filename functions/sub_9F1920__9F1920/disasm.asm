0x9F1920: push    offset aMagnitude; "Magnitude"
0x9F1925: push    offset aSmagnitudetext; "sMagnitudeText"
0x9F192A: mov     ecx, offset stru_B38930; self
0x9F192F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1934: push    offset sub_A21980; void (__cdecl *)()
0x9F1939: call    _atexit
0x9F193E: pop     ecx
0x9F193F: retn
