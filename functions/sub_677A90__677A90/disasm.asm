0x677A90: push    ecx; MEF LARGE PERF 2026-09-08: PERF-7 population: LoadGame466918 calls rebuild, which frees candidate nodes, empties embeddedhead+60, walks process-list+68 and admits nearby actor references with duplicate checks. Only this direct rebuild caller was found. Large post-load lists can precede trimming; no assertion of continual per-frame rebuild.
0x677A91: push    esi
0x677A92: mov     esi, ecx
0x677A94: cmp     dword ptr [esi+64h], 0
0x677A98: push    edi
0x677A99: jz      short loc_677AB6
0x677A9B: jmp     short loc_677AA0
0x677AA0: mov     eax, [esi+64h]
0x677AA3: mov     edi, [eax+4]
0x677AA6: push    eax
0x677AA7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x677AAC: add     esp, 4
0x677AAF: test    edi, edi
0x677AB1: mov     [esi+64h], edi
0x677AB4: jnz     short loc_677AA0
0x677AB6: lea     ecx, [esi+68h]; this
0x677AB9: mov     dword ptr [esi+60h], 0
0x677AC0: call    ActorList_ReturnHead; Identity helper used before actor list iteration; callers then treat the returned pointer as tList node {Actor* item, Node* next}.
0x677AC5: mov     esi, eax
0x677AC7: xor     edi, edi
0x677AC9: test    esi, esi
0x677ACB: jz      short loc_677B3D
0x677ACD: lea     ecx, [ecx+0]
0x677AD0: cmp     dword ptr [esi+4], 0
0x677AD4: jnz     short loc_677ADB
0x677AD6: cmp     dword ptr [esi], 0
0x677AD9: jz      short loc_677B3D
0x677ADB: mov     ecx, [esi]
0x677ADD: mov     eax, [ecx]
0x677ADF: mov     edx, [eax+190h]
0x677AE5: call    edx
0x677AE7: test    al, al
0x677AE9: jz      short loc_677AED; MEF PERF 2026-10-02: PERF-10 semantic constraint: failed vcall predicate leaves EDI unchanged, so the prior accepted reference can be processed again. Preserve this carried reference and all predicate/distance calls; deleting duplicate checks or resetting EDI per iteration changes stock behavior.
0x677AEB: mov     edi, [esi]
0x677AED: test    edi, edi
0x677AEF: jz      short loc_677B36
0x677AF1: mov     eax, ds:0B333C4h
0x677AF6: push    0
0x677AF8: push    eax
0x677AF9: mov     ecx, edi
0x677AFB: call    TesObjectREF_GetDistance
0x677B00: fstp    [esp+0Ch+var_4]
0x677B04: fld     [esp+0Ch+var_4]
0x677B08: fld     dword ptr ds:0B36CD8h
0x677B0E: fcompp
0x677B10: fnstsw  ax
0x677B12: test    ah, 41h
0x677B15: jnz     short loc_677B36
0x677B17: mov     eax, (offset qword_B3BB2C+234h)
0x677B1C: lea     esp, [esp+0]
0x677B20: cmp     [eax], edi; MEF LARGE PERF 2026-09-08: PERF-7 secondary load cost: each accepted nearby actor is checked by a linear pointer-equality scan of the growing candidate list before PushFront677B31. Normal distinct accepted actors yield quadratic duplicate checking. Do not remove this check without proving all producer/duplicate semantics; it prevents repeated carried or duplicate references.
0x677B22: jz      short loc_677B36
0x677B24: mov     eax, [eax+4]
0x677B27: test    eax, eax
0x677B29: jnz     short loc_677B20; MEF LARGE PERF 2026-09-08: PERF-7 secondary load cost: each accepted nearby actor is checked by a linear pointer-equality scan of the growing candidate list before PushFront677B31. Normal distinct accepted actors yield quadratic duplicate checking. Do not remove this check without proving all producer/duplicate semantics; it prevents repeated carried or duplicate references.
0x677B2B: push    edi
0x677B2C: mov     ecx, (offset qword_B3BB2C+234h)
0x677B31: call    BSSimpleList_PushFront; MEF PERF 2026-10-02: PERF-10 ownership: native446CB0 PushFront moves old embedded-head payload into an allocated node; no AddRef is performed. Keep native admission order and allocation semantics. Publish membership only after successful native insertion. Native allocation failure is not converted into silent actor loss.
0x677B36: mov     esi, [esi+4]
0x677B39: test    esi, esi
0x677B3B: jnz     short loc_677AD0
0x677B3D: pop     edi
0x677B3E: pop     esi
0x677B3F: pop     ecx
0x677B40: retn
