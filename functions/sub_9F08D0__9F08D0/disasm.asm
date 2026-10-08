0x9F08D0: push    offset aStoresInvested; "Stores Invested In: "
0x9F08D5: push    offset aSmiscstoresinv; "sMiscStoresInvestedIn"
0x9F08DA: mov     ecx, offset stru_B38520; self
0x9F08DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F08E4: push    offset sub_A21160; void (__cdecl *)()
0x9F08E9: call    _atexit
0x9F08EE: pop     ecx
0x9F08EF: retn
