0x9F9F00: push    offset aMercantileDesc; "Mercantile Description"
0x9F9F05: push    offset aSskilldescmerc; "sSkillDescMercantile"
0x9F9F0A: mov     ecx, offset stru_B3A25C; self
0x9F9F0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9F14: push    offset sub_A23CF0; void (__cdecl *)()
0x9F9F19: call    _atexit
0x9F9F1E: pop     ecx
0x9F9F1F: retn
