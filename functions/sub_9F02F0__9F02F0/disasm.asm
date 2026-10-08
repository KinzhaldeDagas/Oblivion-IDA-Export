0x9F02F0: push    offset aSkillIncreased; "skill increased"
0x9F02F5: push    offset aSskillincrease; "sSkillIncreased"
0x9F02FA: mov     ecx, 0B383A8h; self
0x9F02FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0304: push    offset sub_A20E70; void (__cdecl *)()
0x9F0309: call    _atexit
0x9F030E: pop     ecx
0x9F030F: retn
