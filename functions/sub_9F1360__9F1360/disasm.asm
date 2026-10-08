0x9F1360: push    offset aAutoloading___; "Autoloading..."
0x9F1365: push    offset aSautoloading; "sAutoLoading"
0x9F136A: mov     ecx, offset stru_B387C0; self
0x9F136F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1374: push    offset sub_A216A0; void (__cdecl *)()
0x9F1379: call    _atexit
0x9F137E: pop     ecx
0x9F137F: retn
