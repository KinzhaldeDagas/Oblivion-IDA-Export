0x9F2CE0: push    offset aDoYouWantToSte; "Do you want to steal this horse?"
0x9F2CE5: push    offset aSstealhorse; "sStealHorse"
0x9F2CEA: mov     ecx, 0B38DC0h; self
0x9F2CEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2CF4: push    offset sub_A222A0; void (__cdecl *)()
0x9F2CF9: call    _atexit
0x9F2CFE: pop     ecx
0x9F2CFF: retn
