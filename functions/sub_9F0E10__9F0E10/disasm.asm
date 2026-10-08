0x9F0E10: push    offset aAreYouSureYo_1; "Are you sure you want to be born under "...
0x9F0E15: push    offset aSconfirmbirths; "sConfirmBirthsign1"
0x9F0E1A: mov     ecx, offset stru_B38670; self
0x9F0E1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0E24: push    offset sub_A21400; void (__cdecl *)()
0x9F0E29: call    _atexit
0x9F0E2E: pop     ecx
0x9F0E2F: retn
