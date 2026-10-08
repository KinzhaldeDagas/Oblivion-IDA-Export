0x9F2620: push    offset aReload_0; "Reload"
0x9F2625: push    offset aSmiscplayerd_0; "sMiscPlayerDeadLoadOption"
0x9F262A: mov     ecx, offset stru_B38C10; self
0x9F262F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2634: push    offset sub_A21F40; void (__cdecl *)()
0x9F2639: call    _atexit
0x9F263E: pop     ecx
0x9F263F: retn
