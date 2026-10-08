0x9F95D0: push    50h ; 'P'; defaultValue
0x9F95D2: push    offset aIhighdamp; "iHighDamp"
0x9F95D7: mov     ecx, offset stru_B3A014; self
0x9F95DC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F95E1: push    offset sub_A23870; void (__cdecl *)()
0x9F95E6: call    _atexit
0x9F95EB: pop     ecx
0x9F95EC: retn
