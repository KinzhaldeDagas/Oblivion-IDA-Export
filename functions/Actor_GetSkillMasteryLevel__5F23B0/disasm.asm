0x5F23B0: mov     edx, [esp+actorValue]; Oblivion skill-mastery accessor. Accept only native skill AVs 0x0C..0x20, compute the actor's base calculated skill, and map it through the five configurable mastery thresholds.
0x5F23B4: push    esi
0x5F23B5: lea     esi, [edx-0Ch]
0x5F23B8: xor     eax, eax
0x5F23BA: cmp     esi, 14h
0x5F23BD: pop     esi
0x5F23BE: ja      short locret_5F23CF
0x5F23C0: push    edx
0x5F23C1: call    Actor_GetBaseCalcAVi
0x5F23C6: push    eax; skillValue
0x5F23C7: call    Calc_MasteryFromSkill; Map a base skill value to Oblivion's five mastery tiers using iSkillApprenticeMin=25, iSkillJourneymanMin=50, iSkillExpertMin=75, and iSkillMasterMin=100.
0x5F23CC: add     esp, 4
0x5F23CF: retn    4
