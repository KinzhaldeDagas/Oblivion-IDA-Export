0x52EA90: mov     eax, [ecx+2Ch]; mwMediumArmor: Returns the display name for an Oblivion skill actor value stored at skill+0x2C. No MediumArmor actor value exists in this table.
0x52EA93: lea     ecx, [eax-0Ch]
0x52EA96: cmp     ecx, 14h
0x52EA99: ja      short loc_52EAA5
0x52EA9B: push    eax
0x52EA9C: call    ActorValue_GetName; Return the localized actor-value display name through g_actorValueNameSettings. Native skills occupy the contiguous SkillActorValue range 0x0C..0x20.
0x52EAA1: add     esp, 4
0x52EAA4: retn
0x52EAA5: xor     eax, eax
0x52EAA7: retn
