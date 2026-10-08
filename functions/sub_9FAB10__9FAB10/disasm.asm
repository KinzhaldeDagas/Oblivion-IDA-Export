0x9FAB10: push    19h; Construct/register integer game setting iSkillApprenticeMin with native default 25.
0x9FAB12: push    offset aIskillapprenti; "iSkillApprenticeMin"
0x9FAB17: mov     ecx, offset g_iSkillApprenticeMin; self
0x9FAB1C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FAB21: push    offset sub_A24220; void (__cdecl *)()
0x9FAB26: call    _atexit
0x9FAB2B: pop     ecx
0x9FAB2C: retn
