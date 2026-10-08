0x9EDC20: push    832h; defaultValue
0x9EDC25: push    offset aIclasspilgrim; "iClassPilgrim"
0x9EDC2A: mov     ecx, 0B37C60h; self
0x9EDC2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDC34: push    offset sub_A1FFE0; void (__cdecl *)()
0x9EDC39: call    _atexit
0x9EDC3E: pop     ecx
0x9EDC3F: retn
