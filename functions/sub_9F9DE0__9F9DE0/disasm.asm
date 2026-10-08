0x9F9DE0: push    offset aAlterationDesc; "Alteration Description"
0x9F9DE5: push    offset aSskilldescalte; "sSkillDescAlteration"
0x9F9DEA: mov     ecx, offset stru_B3A214; self
0x9F9DEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9DF4: push    offset sub_A23C60; void (__cdecl *)()
0x9F9DF9: call    _atexit
0x9F9DFE: pop     ecx
0x9F9DFF: retn
