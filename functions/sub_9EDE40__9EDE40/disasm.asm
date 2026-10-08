0x9EDE40: push    23998h; defaultValue
0x9EDE45: push    offset aIclasswitchhun; "iClassWitchhunter"
0x9EDE4A: mov     ecx, 0B37CE8h; self
0x9EDE4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDE54: push    offset sub_A200F0; void (__cdecl *)()
0x9EDE59: call    _atexit
0x9EDE5E: pop     ecx
0x9EDE5F: retn
