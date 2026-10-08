0x9DA830: push    offset aAverage; "Average"
0x9DA835: push    offset aSlocklevelna_1; "sLockLevelNameAverage"
0x9DA83A: mov     ecx, 0B33898h; self
0x9DA83F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA844: push    offset sub_A17950; void (__cdecl *)()
0x9DA849: call    _atexit
0x9DA84E: pop     ecx
0x9DA84F: retn
