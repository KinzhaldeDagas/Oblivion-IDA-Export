0x565CC0: mov     eax, [esp+arg_0]; Return the localized actor-value display name through g_actorValueNameSettings. Native skills occupy the contiguous SkillActorValue range 0x0C..0x20.
0x565CC4: cmp     eax, 27h ; '''; This is the generic ActorValue name API used by gameplay/UI consumers, including effects and requirements. A process-wide Blade->Long Blade substitution changes native Blade semantics outside sidecar-owned rows; scope sidecar labels to their exact UI call sites.
0x565CC7: ja      short ActorValue_GetName___HighActorVal
