0x9EDE80: push    23C08h; defaultValue
0x9EDE85: push    offset aIclassnightbla; "iClassNightblade"
0x9EDE8A: mov     ecx, 0B37CF8h; self
0x9EDE8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDE94: push    offset sub_A20110; void (__cdecl *)()
0x9EDE99: call    _atexit
0x9EDE9E: pop     ecx
0x9EDE9F: retn
