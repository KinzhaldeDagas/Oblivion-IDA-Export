0x9F2210: push    offset aYouGetAllTheIt; "You get all the items that were confisc"...
0x9F2215: push    offset aSgetallconfisc; "sGetAllConfiscatedItems"
0x9F221A: mov     ecx, offset stru_B38B10; self
0x9F221F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2224: push    offset sub_A21D40; void (__cdecl *)()
0x9F2229: call    _atexit
0x9F222E: pop     ecx
0x9F222F: retn
