0x9EDDE0: push    237A9h; defaultValue
0x9EDDE5: push    offset aIclassmonk; "iClassMonk"
0x9EDDEA: mov     ecx, 0B37CD0h; self
0x9EDDEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDDF4: push    offset sub_A200C0; void (__cdecl *)()
0x9EDDF9: call    _atexit
0x9EDDFE: pop     ecx
0x9EDDFF: retn
