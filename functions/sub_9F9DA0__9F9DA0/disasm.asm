0x9F9DA0: push    offset aHeavyArmorDesc; "Heavy Armor Description"
0x9F9DA5: push    offset aSskilldescheav; "sSkillDescHeavyArmor"
0x9F9DAA: mov     ecx, offset stru_B3A204; self
0x9F9DAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9DB4: push    offset sub_A23C40; void (__cdecl *)()
0x9F9DB9: call    _atexit
0x9F9DBE: pop     ecx
0x9F9DBF: retn
