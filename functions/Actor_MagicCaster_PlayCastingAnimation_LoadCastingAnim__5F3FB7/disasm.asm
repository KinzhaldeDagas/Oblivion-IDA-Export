0x5F3FB7: push    0; forceWeaponPrefix
0x5F3FB9: push    0; weaponEntryDataArg
0x5F3FBB: push    ebx; groupID
0x5F3FBC: mov     ecx, esi; this
0x5F3FBE: call    Actor_LoadAnimGroup_; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x5F3FC3: movzx   ebp, ax
0x5F3FC6: push    ebp
0x5F3FC7: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x5F3FCC: add     esp, 4
0x5F3FCF: cmp     eax, ebx
0x5F3FD1: jz      short Actor_MagicCaster_PlayCastingAnimation___CheckAnim
