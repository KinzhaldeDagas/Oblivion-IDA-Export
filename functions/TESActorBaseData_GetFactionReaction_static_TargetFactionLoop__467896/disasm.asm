0x467896: mov     eax, [edi]
0x467898: test    eax, eax
0x46789A: jz      short loc_4678EE
0x46789C: cmp     byte ptr [eax+4], 0FFh
0x4678A0: mov     esi, [eax]
0x4678A2: jle     short TESActorBaseData_GetFactionReaction_static___TargetFactionLoop_next
0x4678A4: movzx   eax, byte ptr [esi+34h]
0x4678A8: shr     eax, 3
0x4678AB: test    al, 1
0x4678AD: jz      short loc_4678C2
0x4678AF: mov     ecx, ds:0B333C4h; this
0x4678B5: push    0; a2
0x4678B7: call    Actor_GetActorBaseForm
0x4678BC: cmp     [esp+arg_14], eax
0x4678C0: jz      short TESActorBaseData_GetFactionReaction_static___TargetFactionLoop_next
0x4678C2: mov     ecx, [esp+arg_10]
0x4678C6: push    esi
0x4678C7: add     ecx, 24h ; '$'
0x4678CA: call    TESReactionForm_GetReactionToTarget
0x4678CF: cmp     esi, [esp+arg_10]
0x4678D3: jnz     short loc_4678DD
0x4678D5: cmp     ebp, eax
0x4678D7: jge     short loc_4678DD
0x4678D9: mov     ebp, eax
0x4678DB: jmp     short TESActorBaseData_GetFactionReaction_static___TargetFactionLoop_next
0x4678DD: test    eax, eax
0x4678DF: jz      short TESActorBaseData_GetFactionReaction_static___TargetFactionLoop_next
0x4678E1: cmp     ebx, eax
0x4678E3: jle     short TESActorBaseData_GetFactionReaction_static___TargetFactionLoop_next
0x4678E5: mov     ebx, eax
