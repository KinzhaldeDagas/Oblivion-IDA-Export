0x9F9EA0: push    offset aAcrobaticsDesc; "Acrobatics Description"
0x9F9EA5: push    offset aSskilldescacro; "sSkillDescAcrobatics"
0x9F9EAA: mov     ecx, offset stru_B3A244; self
0x9F9EAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9EB4: push    offset sub_A23CC0; void (__cdecl *)()
0x9F9EB9: call    _atexit
0x9F9EBE: pop     ecx
0x9F9EBF: retn
