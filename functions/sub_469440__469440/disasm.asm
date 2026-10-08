0x469440: mov     eax, [esp+arg_0]
0x469444: push    esi
0x469445: push    0; int
0x469447: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x46944C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x469451: push    0; int
0x469453: push    eax; void *
0x469454: call    OblivionDynamicCast
0x469459: mov     esi, eax
0x46945B: add     esp, 14h
0x46945E: test    esi, esi
0x469460: jnz     short loc_469464
0x469462: pop     esi
0x469463: retn
0x469464: mov     ecx, [esp+4+arg_4]; reference
0x469468: test    ecx, ecx
0x46946A: jnz     short loc_46947A
0x46946C: mov     eax, [esi+6Ch]
0x46946F: test    eax, eax
0x469471: jnz     short loc_46949A
0x469473: mov     eax, offset EmptyString
0x469478: pop     esi
0x469479: retn
0x46947A: call    TESObjectREFR_GetOwner; Verified owner-resolution order: return this reference's direct XOWN; for non-actors only, try a linked door's XOWN; if still absent, inherit the parent cell's direct owner except for furniture, doors, and activators. Actors never inherit linked-door/cell ownership. Fallout's analogous GetOwner includes an encounter-zone-owner fallback before parent-cell handling; Oblivion's body has no such branch.
0x46947F: mov     ecx, eax
0x469481: xor     eax, eax
0x469483: test    ecx, ecx
0x469485: jz      short loc_469492
0x469487: cmp     byte ptr [ecx+4], 23h ; '#'
0x46948B: jnz     short loc_469492
0x46948D: call    TESActorBase_IsFemale
0x469492: push    eax
0x469493: mov     ecx, esi
0x469495: call    TESBipedModelForm_GetBipedIconPath
0x46949A: pop     esi
0x46949B: retn
