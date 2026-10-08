0x9EB940: push    0Ah; Construct/register iLevelUpSkillCount with Oblivion default 10 major-skill advances.
0x9EB942: push    offset aIlevelupskillc; "iLevelUpSkillCount"
0x9EB947: mov     ecx, offset g_iLevelUpSkillCount; self
0x9EB94C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EB951: push    offset sub_A1F350; void (__cdecl *)()
0x9EB956: call    _atexit
0x9EB95B: pop     ecx
0x9EB95C: retn
