0x9F0EE0: push    offset aYouOpenedTheDo; "You opened the door with "
0x9F0EE5: push    offset aSopenwithkey; "sOpenWithKey"
0x9F0EEA: mov     ecx, offset stru_B386A0; self
0x9F0EEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0EF4: push    offset sub_A21460; void (__cdecl *)()
0x9F0EF9: call    _atexit
0x9F0EFE: pop     ecx
0x9F0EFF: retn
