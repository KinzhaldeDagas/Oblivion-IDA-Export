0x7AA550: sub     esp, 10h; MEF PERF 2026-10-07 PASS5: PERF-15 Verified avoidable ordered-list work: stable bottom-up merge sort, run width starts1 and doubles until one merge group. No already-ordered probe. For sorted/equal-key N=2^k>=2, k rounds emit N*k nodes and perform N*k/2 comparator calls. Proposed adjacent-order check can use N-1 comparisons and skip relinking under stable valid inputs; actual batch sizes/time unmeasured.
0x7AA553: push    esi
0x7AA554: mov     esi, ecx
0x7AA556: mov     [esp+14h+var_4], esi
0x7AA55A: call    BSTPersistentList_ReleaseFreeNodesToGlobalPool; MEF PERF 2026-10-07 PASS5: PERF-15 mandatory prelude: ReleaseFreeNodesToGlobalPool runs BEFORE checking active list. Returns existing free chain+0C, clears it, terminates active tail.next. A fast return before this call is not equivalent and may leave active list linked into the free chain. Preserve exactly-once cleanup; post-cleanup decision point7AA55F.
0x7AA55F: xor     eax, eax; MEF PERF 2026-10-07 PASS5: PERF-15 candidate decision point after mandatory cleanup, before EBX/EBP/EDI pushes. Ordered supported path could return EAX0 through7AA64E (popESI/addESP10/ret4); disorder must enter native code with original flags/stack preserved. This is a design anchor, not an approved overwrite window or emitted bridge.
0x7AA561: cmp     [esi+4], eax
0x7AA564: jz      loc_7AA64E
0x7AA56A: push    ebx
0x7AA56B: push    ebp
0x7AA56C: mov     [esp+1Ch+var_C], 1
0x7AA574: push    edi
0x7AA575: mov     edi, [esi+4]
0x7AA578: mov     edx, [esp+20h+var_C]
0x7AA57C: xor     ecx, ecx
0x7AA57E: cmp     edi, eax
0x7AA580: mov     [esi+4], eax
0x7AA583: mov     [esp+20h+var_10], ecx
0x7AA587: mov     [esp+20h+var_8], eax
0x7AA58B: jz      loc_7AA633
0x7AA591: add     [esp+20h+var_8], 1
0x7AA596: xor     ebx, ebx
0x7AA598: xor     eax, eax
0x7AA59A: test    edx, edx
0x7AA59C: mov     esi, edi
0x7AA59E: jbe     short loc_7AA5B0
0x7AA5A0: mov     esi, [esi]
0x7AA5A2: add     ebx, 1
0x7AA5A5: test    esi, esi
0x7AA5A7: jz      short loc_7AA5B0
0x7AA5A9: add     eax, 1
0x7AA5AC: cmp     eax, edx
0x7AA5AE: jb      short loc_7AA5A0
0x7AA5B0: mov     ebp, edx
0x7AA5B2: test    ebx, ebx
0x7AA5B4: jg      short loc_7AA5CB
0x7AA5B6: test    ebp, ebp
0x7AA5B8: jle     short loc_7AA625
0x7AA5BA: test    esi, esi
0x7AA5BC: jz      short loc_7AA625
0x7AA5BE: test    ebx, ebx
0x7AA5C0: jnz     short loc_7AA5CB
0x7AA5C2: mov     eax, esi
0x7AA5C4: mov     esi, [esi]
0x7AA5C6: sub     ebp, 1
0x7AA5C9: jmp     short loc_7AA5FA
0x7AA5CB: test    ebp, ebp
0x7AA5CD: jz      short loc_7AA5F3
0x7AA5CF: test    esi, esi
0x7AA5D1: jz      short loc_7AA5F3
0x7AA5D3: lea     eax, [esi+8]
0x7AA5D6: push    eax
0x7AA5D7: lea     ecx, [edi+8]
0x7AA5DA: push    ecx
0x7AA5DB: call    [esp+28h+compare]
0x7AA5DF: mov     ecx, [esp+28h+var_10]
0x7AA5E3: add     esp, 8
0x7AA5E6: test    eax, eax
0x7AA5E8: jle     short loc_7AA5F3; MEF PERF 2026-10-07 PASS5: PERF-15 comparator ABI/stability: signed JLE after compare selects LEFT run when result<=0, preserving ties. Comparator return types corrected from unsigned to signed int; keys themselves remain unsigned16 selector or unsigned32 geometry-data address. Do not interpret FFFFFFFF (-1) as positive.
0x7AA5EA: mov     eax, esi
0x7AA5EC: mov     esi, [esi]
0x7AA5EE: sub     ebp, 1
0x7AA5F1: jmp     short loc_7AA5FA
0x7AA5F3: mov     eax, edi
0x7AA5F5: mov     edi, [edi]
0x7AA5F7: sub     ebx, 1
0x7AA5FA: test    ecx, ecx
0x7AA5FC: jz      short loc_7AA60F
0x7AA5FE: mov     edx, [esp+20h+var_C]
0x7AA602: mov     [ecx], eax; MEF PERF 2026-10-07 PASS5: PERF-15 merge costs: each emitted node is relinked (previous tail.next and current.previous; first node uses owner.head). Even already-sorted/equal input undergoes all rounds. Nodes are reused; there is no active-node allocation/rebuild in this sort. Do not call it heap allocation churn.
0x7AA604: mov     [eax+4], ecx
0x7AA607: mov     [esp+20h+var_10], eax
0x7AA60B: mov     ecx, eax
0x7AA60D: jmp     short loc_7AA5B2
0x7AA60F: mov     edx, [esp+20h+var_4]
0x7AA613: mov     [edx+4], eax
0x7AA616: mov     edx, [esp+20h+var_C]
0x7AA61A: mov     [eax+4], ecx
0x7AA61D: mov     [esp+20h+var_10], eax
0x7AA621: mov     ecx, eax
0x7AA623: jmp     short loc_7AA5B2
0x7AA625: test    esi, esi
0x7AA627: mov     edi, esi
0x7AA629: jnz     loc_7AA591
0x7AA62F: mov     esi, [esp+20h+var_4]
0x7AA633: xor     eax, eax
0x7AA635: add     edx, edx
0x7AA637: cmp     [esp+20h+var_8], 1
0x7AA63C: mov     [ecx], eax
0x7AA63E: mov     [esp+20h+var_C], edx; MEF PERF 2026-10-07 PASS5: PERF-15 verified bottom-up growth: doubles run width; branch7AA642 repeats unless merge-group count is1; final tail stored7AA64A. Powers-of-two count model applies N>=2. Empty input only does cleanup; singleton still executes one emission round with0 comparator calls.
0x7AA642: jnz     loc_7AA575
0x7AA648: pop     edi
0x7AA649: pop     ebp
0x7AA64A: mov     [esi+8], ecx
0x7AA64D: pop     ebx
0x7AA64E: pop     esi
0x7AA64F: add     esp, 10h
0x7AA652: retn    4
