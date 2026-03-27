0x467961: mov     eax, [esi]
0x467963: test    eax, eax
0x467965: jz      short TESActorBaseData_GetFactionReactionAndRank___ThisFactionLoop_Next
0x467967: cmp     byte ptr [eax+4], 0FFh
0x46796B: mov     edi, [eax]
0x46796D: jle     short TESActorBaseData_GetFactionReactionAndRank___TargetFactionLoop_next
0x46796F: movzx   ecx, byte ptr [edi+34h]
0x467973: shr     ecx, 3
0x467976: test    cl, 1
0x467979: jz      short loc_46798E
0x46797B: mov     ecx, ds:0B333C4h; this
0x467981: push    0; a2
0x467983: call    Actor_GetActorBaseForm
0x467988: cmp     [esp+arg_20], eax
0x46798C: jz      short TESActorBaseData_GetFactionReactionAndRank___TargetFactionLoop_next
0x46798E: push    edi
0x46798F: lea     ecx, [ebp+24h]
0x467992: call    TESReactionForm_GetReactionToTarget
0x467997: cmp     edi, ebp
0x467999: jnz     short loc_4679AD
0x46799B: cmp     ebx, eax
0x46799D: jge     short loc_4679AD
0x46799F: mov     edx, [esi]
0x4679A1: mov     ebx, eax
0x4679A3: movsx   eax, byte ptr [edx+4]
0x4679A7: mov     [esp+arg_14], eax
0x4679AB: jmp     short TESActorBaseData_GetFactionReactionAndRank___TargetFactionLoop_next
0x4679AD: test    eax, eax
0x4679AF: jz      short TESActorBaseData_GetFactionReactionAndRank___TargetFactionLoop_next
0x4679B1: cmp     [esp+arg_10], eax
0x4679B5: jle     short TESActorBaseData_GetFactionReactionAndRank___TargetFactionLoop_next
0x4679B7: mov     ecx, [esi]
0x4679B9: movsx   edx, byte ptr [ecx+4]
0x4679BD: mov     [esp+arg_10], eax
0x4679C1: mov     [esp+arg_18], edx
