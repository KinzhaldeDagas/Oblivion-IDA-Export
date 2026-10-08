0x9DC940: push    offset EmptyString; defaultValue
0x9DC945: push    offset aSrestorename; "sRestoreName"
0x9DC94A: mov     ecx, 0B34D94h; self
0x9DC94F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DC954: push    offset sub_A18A50; void (__cdecl *)()
0x9DC959: call    _atexit
0x9DC95E: pop     ecx
0x9DC95F: retn
