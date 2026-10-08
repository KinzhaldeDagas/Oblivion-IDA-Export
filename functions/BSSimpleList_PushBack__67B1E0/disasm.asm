0x67B1E0: push    edi
0x67B1E1: mov     edi, [esp+4+arg_0]
0x67B1E5: test    edi, edi
0x67B1E7: jz      short loc_67B231
0x67B1E9: cmp     dword ptr [ecx+4], 0; MEF PLAN 2026-09-07: Generic PushBack requires nonnull list receiver whenever payload is nonnull; factory42F5C2 violates this after global head OOM. Do not globally reinterpret PushBack EAX as bool: empty-head path stores payload without defining a stable result.
0x67B1ED: lea     eax, [ecx+4]
0x67B1F0: push    esi
0x67B1F1: mov     esi, ecx
0x67B1F3: jz      short loc_67B200
0x67B1F5: mov     esi, [eax]; MEF PERF 2026-09-07: PERF-2 PushBack next-link traversal: repeats until next==NULL, then allocates/links or fills empty head. Cost is k-1 traversals with k existing nonempty entries. Global signature/ABI should remain unchanged; optimize selected bulk producers with explicit owned context.
0x67B1F7: cmp     dword ptr [esi+4], 0
0x67B1FB: lea     eax, [esi+4]
0x67B1FE: jnz     short loc_67B1F5; MEF PERF 2026-09-07: PERF-2 PushBack next-link traversal: repeats until next==NULL, then allocates/links or fills empty head. Cost is k-1 traversals with k existing nonempty entries. Global signature/ABI should remain unchanged; optimize selected bulk producers with explicit owned context.
0x67B200: cmp     dword ptr [esi], 0
0x67B203: jz      short loc_67B22E
0x67B205: push    8; Size
0x67B207: call    FormHeapAlloc
0x67B20C: add     esp, 4
0x67B20F: test    eax, eax
0x67B211: jz      short loc_67B224
0x67B213: mov     [eax], edi
0x67B215: mov     dword ptr [eax+4], 0
0x67B21C: mov     [esi+4], eax
0x67B21F: pop     esi
0x67B220: pop     edi
0x67B221: retn    4
0x67B224: xor     eax, eax; MEF PLAN 2026-09-07: PushBack dynamic node OOM sets EAX0 and tail.next0; prior traversal already established tail.next0. Existing list remains unchanged, new payload unowned by list. Factory42F5C2 ignores this and returns success. Scoped replacement should prepare node, initialize then link, leaving payload private on failure.
0x67B226: mov     [esi+4], eax
0x67B229: pop     esi
0x67B22A: pop     edi
0x67B22B: retn    4
0x67B22E: mov     [esi], edi
0x67B230: pop     esi
0x67B231: pop     edi
0x67B232: retn    4
