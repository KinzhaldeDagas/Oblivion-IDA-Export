0x452570: push    ebx; MEF PERF 2026-10-02 PASS2: PERF-11 Verified algorithm: SetAt hashes once, scans the bucket by virtual equality, replaces existing or prepends a new node, increments count. No resize/load-factor branch in452570..4525FC. For distinct insertions at fixed B, comparisons=sum n_b*(n_b-1)/2; at B=37 cost is quadratic in accepted population. Actual populations/external resize lifecycle remain Unknown.
0x452571: mov     ebx, [esp+4+arg_0]
0x452575: push    ebp
0x452576: push    esi
0x452577: mov     esi, ecx
0x452579: mov     eax, [esi]
0x45257B: mov     edx, [eax+4]
0x45257E: push    edi
0x45257F: push    ebx
0x452580: call    edx
0x452582: mov     ebp, eax
0x452584: mov     eax, [esi+8]
0x452587: mov     edi, [eax+ebp*4]
0x45258A: test    edi, edi
0x45258C: jz      short NiTMap_SetAt___InsertNode
0x45258E: mov     edi, edi
