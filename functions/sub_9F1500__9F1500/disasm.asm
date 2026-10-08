0x9F1500: push    offset aYouHaveNotSign; "You have not signed in to a Gamer Profi"...
0x9F1505: push    offset aSnoprofilesele; "sNoProfileSelected"
0x9F150A: mov     ecx, offset stru_B38828; self
0x9F150F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1514: push    offset sub_A21770; void (__cdecl *)()
0x9F1519: call    _atexit
0x9F151E: pop     ecx
0x9F151F: retn
