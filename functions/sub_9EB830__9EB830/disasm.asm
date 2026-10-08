0x9EB830: push    0C8h ; 'È'; defaultValue
0x9EB835: push    offset aIperkextrabart; "iPerkExtraBarterGoldMaster"
0x9EB83A: mov     ecx, 0B375E8h; self
0x9EB83F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EB844: push    offset sub_A1F2F0; void (__cdecl *)()
0x9EB849: call    _atexit
0x9EB84E: pop     ecx
0x9EB84F: retn
