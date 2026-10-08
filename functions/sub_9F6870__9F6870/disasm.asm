0x9F6870: push    offset aEyes; "Eyes"
0x9F6875: push    offset aSeyes; "sEyes"
0x9F687A: mov     ecx, offset stru_B38F90; self
0x9F687F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6884: push    offset sub_A22640; void (__cdecl *)()
0x9F6889: call    _atexit
0x9F688E: pop     ecx
0x9F688F: retn
