0x9F0A30: push    offset aYouHaveReached; "You have reached your training limit fo"...
0x9F0A35: push    offset aScannottrainan; "sCanNotTrainAnymore"
0x9F0A3A: mov     ecx, offset stru_B38578; self
0x9F0A3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0A44: push    offset sub_A21210; void (__cdecl *)()
0x9F0A49: call    _atexit
0x9F0A4E: pop     ecx
0x9F0A4F: retn
