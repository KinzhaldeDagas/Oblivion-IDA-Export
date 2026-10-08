0x9EDC60: push    910h; defaultValue
0x9EDC65: push    offset aIclasshealer; "iClassHealer"
0x9EDC6A: mov     ecx, 0B37C70h; self
0x9EDC6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDC74: push    offset sub_A20000; void (__cdecl *)()
0x9EDC79: call    _atexit
0x9EDC7E: pop     ecx
0x9EDC7F: retn
