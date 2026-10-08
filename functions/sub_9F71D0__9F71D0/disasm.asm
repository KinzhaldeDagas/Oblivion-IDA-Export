0x9F71D0: push    offset aNoseNostrilsWi; "Nose nostrils wide/thin"
0x9F71D5: push    offset aSnosenostrilsw; "sNosenostrilswide"
0x9F71DA: mov     ecx, offset stru_B391E8; self
0x9F71DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F71E4: push    offset sub_A22AF0; void (__cdecl *)()
0x9F71E9: call    _atexit
0x9F71EE: pop     ecx
0x9F71EF: retn
