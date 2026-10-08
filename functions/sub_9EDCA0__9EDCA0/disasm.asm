0x9EDCA0: push    1C824h; defaultValue
0x9EDCA5: push    offset aIclassbard; "iClassBard"
0x9EDCAA: mov     ecx, 0B37C80h; self
0x9EDCAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDCB4: push    offset sub_A20020; void (__cdecl *)()
0x9EDCB9: call    _atexit
0x9EDCBE: pop     ecx
0x9EDCBF: retn
