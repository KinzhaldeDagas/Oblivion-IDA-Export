0x9F9AE0: push    offset aResponsibility; "Responsibility"
0x9F9AE5: push    offset aStraitnameresp; "sTraitNameResponsibility"
0x9F9AEA: mov     ecx, 0B3A154h; self
0x9F9AEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9AF4: push    offset sub_A23AE0; void (__cdecl *)()
0x9F9AF9: call    _atexit
0x9F9AFE: pop     ecx
0x9F9AFF: retn
