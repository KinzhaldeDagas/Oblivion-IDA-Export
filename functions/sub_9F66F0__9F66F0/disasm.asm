0x9F66F0: push    offset aYouAreTryingTo; "you are trying to create."
0x9F66F5: push    offset aSentryinstru_0; "sEntryInstructions2"
0x9F66FA: mov     ecx, offset stru_B38F30; self
0x9F66FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6704: push    offset sub_A22580; void (__cdecl *)()
0x9F6709: call    _atexit
0x9F670E: pop     ecx
0x9F670F: retn
