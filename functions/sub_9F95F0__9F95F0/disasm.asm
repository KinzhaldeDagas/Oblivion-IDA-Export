0x9F95F0: push    5; defaultValue
0x9F95F2: push    offset aIupdategroups; "iUpdateGroups"
0x9F95F7: mov     ecx, 0B3A01Ch; self
0x9F95FC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9601: push    offset sub_A23880; void (__cdecl *)()
0x9F9606: call    _atexit
0x9F960B: pop     ecx
0x9F960C: retn
