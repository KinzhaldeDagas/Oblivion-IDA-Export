0x9F0DF0: push    offset aAreYouSureYo_0; "Are you sure you want to be an"
0x9F0DF5: push    offset aSconfirmchoi_0; "sConfirmChoice2"
0x9F0DFA: mov     ecx, offset stru_B38668; self
0x9F0DFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0E04: push    offset sub_A213F0; void (__cdecl *)()
0x9F0E09: call    _atexit
0x9F0E0E: pop     ecx
0x9F0E0F: retn
