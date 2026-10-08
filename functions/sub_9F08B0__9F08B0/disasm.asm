0x9F08B0: push    offset aHousesOwned; "Houses Owned: "
0x9F08B5: push    offset aSmischousesown; "sMiscHousesOwned"
0x9F08BA: mov     ecx, offset stru_B38518; self
0x9F08BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F08C4: push    offset sub_A21150; void (__cdecl *)()
0x9F08C9: call    _atexit
0x9F08CE: pop     ecx
0x9F08CF: retn
