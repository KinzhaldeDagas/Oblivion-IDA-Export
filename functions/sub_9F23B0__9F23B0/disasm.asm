0x9F23B0: push    offset aNoRace; "NO RACE"
0x9F23B5: push    offset aSnorace; "sNoRace"
0x9F23BA: mov     ecx, offset stru_B38B78; self
0x9F23BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F23C4: push    offset sub_A21E10; void (__cdecl *)()
0x9F23C9: call    _atexit
0x9F23CE: pop     ecx
0x9F23CF: retn
