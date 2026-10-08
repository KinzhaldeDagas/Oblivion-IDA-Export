0x9F0890: push    offset aHorsesOwned; "Horses Owned: "
0x9F0895: push    offset aSmischorsesown; "sMiscHorsesOwned"
0x9F089A: mov     ecx, offset stru_B38510; self
0x9F089F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F08A4: push    offset sub_A21140; void (__cdecl *)()
0x9F08A9: call    _atexit
0x9F08AE: pop     ecx
0x9F08AF: retn
