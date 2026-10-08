0x9EDC40: push    836h; defaultValue
0x9EDC45: push    offset aIclassknight; "iClassKnight"
0x9EDC4A: mov     ecx, 0B37C68h; self
0x9EDC4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDC54: push    offset sub_A1FFF0; void (__cdecl *)()
0x9EDC59: call    _atexit
0x9EDC5E: pop     ecx
0x9EDC5F: retn
