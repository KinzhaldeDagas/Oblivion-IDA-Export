0x9DF340: push    offset aSecondSeed; "Second Seed"
0x9DF345: push    offset aSmonthsecondse; "sMonthSecondSeed"
0x9DF34A: mov     ecx, 0B3510Ch; self
0x9DF34F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF354: push    offset sub_A19F60; void (__cdecl *)()
0x9DF359: call    _atexit
0x9DF35E: pop     ecx
0x9DF35F: retn
