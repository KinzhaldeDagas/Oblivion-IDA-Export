0x9EDE60: push    23C07h; defaultValue
0x9EDE65: push    offset aIclassspellswo; "iClassSpellsword"
0x9EDE6A: mov     ecx, 0B37CF0h; self
0x9EDE6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDE74: push    offset sub_A20100; void (__cdecl *)()
0x9EDE79: call    _atexit
0x9EDE7E: pop     ecx
0x9EDE7F: retn
