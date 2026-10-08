0x9FAB70: push    64h ; 'd'; Construct/register integer game setting iSkillMasterMin with native default 100.
0x9FAB72: push    offset aIskillmastermi; "iSkillMasterMin"
0x9FAB77: mov     ecx, offset g_iSkillMasterMin; self
0x9FAB7C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FAB81: push    offset sub_A24250; void (__cdecl *)()
0x9FAB86: call    _atexit
0x9FAB8B: pop     ecx
0x9FAB8C: retn
