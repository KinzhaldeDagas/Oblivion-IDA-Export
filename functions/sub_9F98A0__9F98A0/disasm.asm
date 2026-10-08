0x9F98A0: push    offset aHeavyArmor; "Heavy Armor"
0x9F98A5: push    offset aSskillnameheav; "sSkillNameHeavyArmor"
0x9F98AA: mov     ecx, offset g_sSkillNameHeavyArmor; self
0x9F98AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F98B4: push    offset sub_A239C0; void (__cdecl *)()
0x9F98B9: call    _atexit
0x9F98BE: pop     ecx
0x9F98BF: retn
