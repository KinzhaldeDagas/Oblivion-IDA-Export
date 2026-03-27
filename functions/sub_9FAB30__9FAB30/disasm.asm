0x9FAB30: push    32h ; '2'
0x9FAB32: push    offset aIskilljourneym; "iSkillJourneymanMin"
0x9FAB37: mov     ecx, offset iSkillJourneymanMin
0x9FAB3C: call    GameSetting_ConstrAndReg
0x9FAB41: push    offset sub_A24230; void (__cdecl *)()
0x9FAB46: call    _atexit
0x9FAB4B: pop     ecx
0x9FAB4C: retn
