0x66A3D0: mov     eax, [esp+skill]; Apply one purchased training level. The shared Player_SkillLevelIncrease call skips progress consumption but still performs base-skill, requirement, mastery, per-skill, specialization, attribute-bonus, and seven-major side effects; then increment session and training statistics.
0x66A3D4: push    esi
0x66A3D5: push    1; showFeedback
0x66A3D7: push    1; skipProgressConsumption
0x66A3D9: push    eax; skill
0x66A3DA: mov     esi, ecx
0x66A3DC: call    Player_SkillLevelIncrease; Training flag bypasses consumption of skillExp, but major/non-major classification and all level-increase counters still run inside Player_SkillLevelIncrease.
0x66A3E1: add     dword ptr [esi+5BCh], 1
0x66A3E8: add     dword ptr [esi+664h], 1
0x66A3EF: pop     esi
0x66A3F0: retn    4
