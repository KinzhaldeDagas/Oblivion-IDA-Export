0x9EDE00: push    237ACh; defaultValue
0x9EDE05: push    offset aIclasssorcerer; "iClassSorcerer"
0x9EDE0A: mov     ecx, 0B37CD8h; self
0x9EDE0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDE14: push    offset sub_A200D0; void (__cdecl *)()
0x9EDE19: call    _atexit
0x9EDE1E: pop     ecx
0x9EDE1F: retn
