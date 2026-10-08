0x9FA510: push    offset aTrespass; "Trespass"
0x9FA515: push    offset aScrimetypetres; "sCrimeTypeTrespass"
0x9FA51A: mov     ecx, offset stru_B3A3E0; self
0x9FA51F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA524: push    offset sub_A23FF0; void (__cdecl *)()
0x9FA529: call    _atexit
0x9FA52E: pop     ecx
0x9FA52F: retn
