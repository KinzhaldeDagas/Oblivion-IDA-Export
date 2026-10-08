0x9FA570: push    offset aStealHorse; "Steal Horse"
0x9FA575: push    offset aScrimetypest_0; "sCrimeTypeStealHorse"
0x9FA57A: mov     ecx, offset stru_B3A3F8; self
0x9FA57F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA584: push    offset sub_A24020; void (__cdecl *)()
0x9FA589: call    _atexit
0x9FA58E: pop     ecx
0x9FA58F: retn
