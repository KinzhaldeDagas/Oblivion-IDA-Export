0x51BE50: mov     eax, [esp+actorValue]; Oblivion-native checked attribute-name lookup. Validates an attribute actor value before returning its localized display name.
0x51BE54: cmp     eax, 7
0x51BE57: ja      short loc_51BE62
0x51BE59: mov     [esp+actorValue], eax
0x51BE5D: jmp     ActorValue_GetName; Return the localized actor-value display name through g_actorValueNameSettings. Native skills occupy the contiguous SkillActorValue range 0x0C..0x20.
0x51BE62: xor     eax, eax
0x51BE64: retn
