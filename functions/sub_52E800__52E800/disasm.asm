0x52E800: mov     eax, [esp+actorValue]; Oblivion-native checked skill-name lookup. Accepts only the 21 skill actor values (0x0C..0x20) before indexing the skill-name table.
0x52E804: lea     ecx, [eax-0Ch]
0x52E807: cmp     ecx, 14h
0x52E80A: ja      short loc_52E815
0x52E80C: mov     [esp+actorValue], eax
0x52E810: jmp     ActorValue_GetName; Return the localized actor-value display name through g_actorValueNameSettings. Native skills occupy the contiguous SkillActorValue range 0x0C..0x20.
0x52E815: xor     eax, eax
0x52E817: retn
