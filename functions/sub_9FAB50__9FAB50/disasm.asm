0x9FAB50: push    4Bh ; 'K'; Construct/register integer game setting iSkillExpertMin with native default 75.
0x9FAB52: push    offset aIskillexpertmi; "iSkillExpertMin"
0x9FAB57: mov     ecx, offset g_iSkillExpertMin; self
0x9FAB5C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FAB61: push    offset sub_A24240; void (__cdecl *)()
0x9FAB66: call    _atexit
0x9FAB6B: pop     ecx
0x9FAB6C: retn
