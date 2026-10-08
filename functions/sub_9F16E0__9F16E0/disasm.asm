0x9F16E0: push    offset aViewAll; "View All"
0x9F16E5: push    offset aSviewall; "sViewAll"
0x9F16EA: mov     ecx, offset stru_B388A0; self
0x9F16EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F16F4: push    offset sub_A21860; void (__cdecl *)()
0x9F16F9: call    _atexit
0x9F16FE: pop     ecx
0x9F16FF: retn
