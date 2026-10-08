0x9EDC80: push    105D6h; defaultValue
0x9EDC85: push    offset aIclassmage; "iClassMage"
0x9EDC8A: mov     ecx, 0B37C78h; self
0x9EDC8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDC94: push    offset sub_A20010; void (__cdecl *)()
0x9EDC99: call    _atexit
0x9EDC9E: pop     ecx
0x9EDC9F: retn
