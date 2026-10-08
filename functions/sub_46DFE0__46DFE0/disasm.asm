0x46DFE0: push    ebp
0x46DFE1: push    edi
0x46DFE2: mov     edi, [esp+8+a1]
0x46DFE6: test    edi, edi
0x46DFE8: mov     ebp, ecx
0x46DFEA: jz      loc_46E070
0x46DFF0: push    esi
0x46DFF1: mov     esi, [esp+0Ch+arg_0]
0x46DFF5: test    esi, esi
0x46DFF7: jz      short loc_46E06F
0x46DFF9: mov     ecx, edi
0x46DFFB: call    TESFile_GetChunkType
0x46E000: cmp     eax, 5446494Eh
0x46E005: jz      short loc_46E065
0x46E007: cmp     eax, 5A46494Eh
0x46E00C: jnz     short loc_46E06F
0x46E00E: mov     eax, [edi+254h]
0x46E014: push    ebx
0x46E015: push    eax; Size
0x46E016: call    FormHeapAlloc; MEF v57 IMPLEMENTED 2026-10-08: PERF-2 supersedes old v55/v56 allocation-hook target with PerfAMAllocateNifzPatch: retains actual size and buffer across nested allocation callbacks. Coupled read46E027 and batch46E02C use captured initialized extent plus two sentinels; do not trust a post-callback changed TESFile chunk size. Exactly one native free at46E055.
0x46E01B: add     esp, 4
0x46E01E: mov     ebx, eax
0x46E020: push    0; a4
0x46E022: push    ebx; Dst
0x46E023: mov     ecx, edi; a1
0x46E025: mov     esi, ebx
0x46E027: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x46E02C: cmp     byte ptr [ebx], 0; MEF PERF 2026-09-07: Proposed PERF-2 bulk-loader boundary5bytes803B007424; EBXtemp buffer, EBPmodel component, EDI TESFile. Source advertised length is[EDI+254h]; v55 allocates two trailing zero sentinels at46E016. Bulk optimization must preserve first-empty-string termination, valid order and caller-owned free46E055/56, and seal initialized input extent; sentinels are not complete-read proof. No ready-made unsafe jump or source-pointer ownership transfer.
0x46E02F: jz      short loc_46E055
0x46E031: push    esi
0x46E032: mov     ecx, ebp
0x46E034: call    TESModelList_AddUniqueModelPath; MEF PERF 2026-09-07: PERF-2 direct producer: NIFZ loader calls AddUniqueModelPath once per nonempty encoded string, then scans input length again and advances46E04F. Empty string terminates the list. This is a resource-loading path via TESCreature_LoadForm51E17F, not established as a per-frame FPS bottleneck.
0x46E039: mov     eax, esi
0x46E03B: lea     edx, [eax+1]
0x46E03E: mov     edi, edi
0x46E040: mov     cl, [eax]
0x46E042: add     eax, 1
0x46E045: test    cl, cl
0x46E047: jnz     short loc_46E040
0x46E049: sub     eax, edx
0x46E04B: cmp     [esi+eax+1], cl
0x46E04F: lea     esi, [esi+eax+1]
0x46E053: jnz     short loc_46E031
0x46E055: push    ebx
0x46E056: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x46E05B: add     esp, 4
0x46E05E: pop     ebx
0x46E05F: pop     esi
0x46E060: pop     edi
0x46E061: pop     ebp
0x46E062: retn    8
0x46E065: push    edi
0x46E066: push    esi
0x46E067: lea     ecx, [ebp+0Ch]
0x46E06A: call    sub_46DE60
0x46E06F: pop     esi
0x46E070: pop     edi
0x46E071: pop     ebp
0x46E072: retn    8
