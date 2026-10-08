0x9FA550: push    offset aMurder; "Murder"
0x9FA555: push    offset aScrimetypemurd; "sCrimeTypeMurder"
0x9FA55A: mov     ecx, offset stru_B3A3F0; self
0x9FA55F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA564: push    offset sub_A24010; void (__cdecl *)()
0x9FA569: call    _atexit
0x9FA56E: pop     ecx
0x9FA56F: retn
