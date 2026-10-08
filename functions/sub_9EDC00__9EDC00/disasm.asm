0x9EDC00: push    23793h; defaultValue
0x9EDC05: push    offset aIclassassassin; "iClassAssassin"
0x9EDC0A: mov     ecx, 0B37C58h; self
0x9EDC0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDC14: push    offset sub_A1FFD0; void (__cdecl *)()
0x9EDC19: call    _atexit
0x9EDC1E: pop     ecx
0x9EDC1F: retn
