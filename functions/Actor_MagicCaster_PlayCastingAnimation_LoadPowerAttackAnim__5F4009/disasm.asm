0x5F4009: mov     ecx, esi; this
0x5F400B: call    TESObjectREFR_GetName
0x5F4010: push    eax; ArgList
0x5F4011: push    offset aSDoesnTHaveALe; "%s doesn't have a LEFT attack animation"...
0x5F4016: call    PrintError
0x5F401B: add     esp, 8
0x5F401E: push    0; forceWeaponPrefix
0x5F4020: push    0; weaponEntryDataArg
0x5F4022: mov     ebx, 16h
0x5F4027: push    ebx; groupID
0x5F4028: mov     ecx, esi; this
0x5F402A: call    Actor_LoadAnimGroup_; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x5F402F: movzx   ebp, ax
