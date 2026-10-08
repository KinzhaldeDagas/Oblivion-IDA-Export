0x9FAB30: push    32h ; '2'; Construct/register integer game setting iSkillJourneymanMin with native default 50.
0x9FAB32: push    offset aIskilljourneym; "iSkillJourneymanMin"
0x9FAB37: mov     ecx, offset g_iSkillJourneymanMin; self
0x9FAB3C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FAB41: push    offset sub_A24230; void (__cdecl *)()
0x9FAB46: call    _atexit
0x9FAB4B: pop     ecx
0x9FAB4C: retn
