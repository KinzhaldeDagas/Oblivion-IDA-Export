0x619C90: push    ecx
0x619C91: push    esi
0x619C92: mov     esi, ecx
0x619C94: mov     eax, [esi+40h]
0x619C97: xor     ecx, ecx
0x619C99: test    eax, eax
0x619C9B: jz      loc_619D39
0x619CA1: cmp     dword ptr [eax], 0
0x619CA4: jz      short loc_619CA9
0x619CA6: add     ecx, 1
0x619CA9: mov     eax, [eax+4]
0x619CAC: test    eax, eax
0x619CAE: jnz     short loc_619CA1
0x619CB0: cmp     ecx, 1
0x619CB3: jbe     loc_619D39
0x619CB9: mov     ecx, [esi+28h]
0x619CBC: push    edi
0x619CBD: call    sub_569E60
0x619CC2: mov     ecx, [esi+40h]
0x619CC5: push    offset CombatTargetInfo_ComparePriorityDescending
0x619CCA: mov     edi, eax
0x619CCC: call    BSSimpleList_SortViaArrayAndRebuild; MEF LARGE PERF 2026-09-08: PERF-8 combat caller: target-retention routine sorts once when target count>1, then may adjust displaced target signed priority and sort again619D33. Both calls ignore the sort helper's incidental EAX. Removing a sort or retention delta is not the proposed optimization; remove only internal node churn.
0x619CD1: mov     ecx, esi
0x619CD3: call    CombatController_GetCurrentTarget
0x619CD8: test    eax, eax
0x619CDA: jz      short loc_619D38
0x619CDC: push    ebx
0x619CDD: mov     ebx, [esi+28h]
0x619CE0: mov     ecx, esi
0x619CE2: call    CombatController_GetCurrentTarget
0x619CE7: push    eax
0x619CE8: mov     ecx, ebx
0x619CEA: call    TeSPackage_TargetData_SetTargetREFR; 3DTheft decode: TargetData_SetTargetREFR only writes the reference field when targetType is 0 (reference target). It does not set count.
0x619CEF: mov     ecx, esi
0x619CF1: call    CombatController_GetCurrentTarget
0x619CF6: cmp     eax, edi
0x619CF8: pop     ebx
0x619CF9: jz      short loc_619D38
0x619CFB: push    edi
0x619CFC: mov     ecx, esi
0x619CFE: call    CombatController_FindTargetInfo
0x619D03: mov     ecx, eax
0x619D05: test    ecx, ecx
0x619D07: jz      short loc_619D38
0x619D09: mov     edx, [ecx+4]
0x619D0C: mov     [esp+0Ch+var_4], edx
0x619D10: fild    [esp+0Ch+var_4]
0x619D14: fcomp   dword ptr ds:0A30634h
0x619D1A: fnstsw  ax
0x619D1C: test    ah, 44h
0x619D1F: jnp     short loc_619D38
0x619D21: mov     eax, ds:0B36C70h
0x619D26: add     edx, eax
0x619D28: mov     [ecx+4], edx; Stock target-retention decay: add unk_B36C70 == -1 to the displaced target's live signed priority before resorting. SmartAI must preserve this external delta.
0x619D2B: mov     ecx, [esi+40h]
0x619D2E: push    offset CombatTargetInfo_ComparePriorityDescending
0x619D33: call    BSSimpleList_SortViaArrayAndRebuild
0x619D38: pop     edi
0x619D39: pop     esi
0x619D3A: pop     ecx
0x619D3B: retn
