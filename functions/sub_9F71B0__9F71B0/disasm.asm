0x9F71B0: push    offset aNoseNostrilsSm; "Nose nostrils small/large"
0x9F71B5: push    offset aSnosenostrilss; "sNosenostrilssmall"
0x9F71BA: mov     ecx, offset stru_B391E0; self
0x9F71BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F71C4: push    offset sub_A22AE0; void (__cdecl *)()
0x9F71C9: call    _atexit
0x9F71CE: pop     ecx
0x9F71CF: retn
