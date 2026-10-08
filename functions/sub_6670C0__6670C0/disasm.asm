0x6670C0: push    esi; Recomputes required skill-use progress for all 21 native Oblivion skill actor values by calling Player_RecalculateRequiredSkillExperience.
0x6670C1: push    edi
0x6670C2: mov     edi, ecx
0x6670C4: xor     esi, esi
0x6670C6: push    esi
0x6670C7: push    2
0x6670C9: call    ActorValue_GetAVFromGroupOffset; mwMediumArmor: Oblivion group 2 maps skill offset to actor value by adding 0x0C. OpenMW/Morrowind skill index 2 is MediumArmor, but Oblivion offset 2 becomes actor value 0x0E (Blade). Do not pass Morrowind skill indexes directly through this helper.
0x6670CE: add     esp, 8
0x6670D1: push    eax; actorValue
0x6670D2: mov     ecx, edi; this
0x6670D4: call    Player_RecalculateRequiredSkillExperience; Skill-use requirement recalculation evaluates the curve with the raw skill level, including level 0; only an exactly-zero computed result is replaced with 1.
0x6670D9: add     esi, 1
0x6670DC: cmp     esi, 15h
0x6670DF: jl      short loc_6670C6
0x6670E1: pop     edi
0x6670E2: pop     esi
0x6670E3: retn
