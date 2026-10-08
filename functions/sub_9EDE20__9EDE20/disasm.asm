0x9EDE20: push    23997h; defaultValue
0x9EDE25: push    offset aIclassbattlema; "iClassBattlemage"
0x9EDE2A: mov     ecx, 0B37CE0h; self
0x9EDE2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDE34: push    offset sub_A200E0; void (__cdecl *)()
0x9EDE39: call    _atexit
0x9EDE3E: pop     ecx
0x9EDE3F: retn
