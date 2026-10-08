0x7ABDE0: push    esi; MoonSugarEffect decode: BSTPersistentList append helper. Reuses a free node or allocates one, stores payload at node+8, links at tail, increments count.
0x7ABDE1: mov     esi, ecx
0x7ABDE3: mov     eax, [esi+0Ch]
0x7ABDE6: test    eax, eax
0x7ABDE8: jnz     short loc_7ABDF4
0x7ABDEA: lea     ecx, [esi+10h]
0x7ABDED: call    NiTListNodePool_Acquire; Acquire one zeroed 12-byte NiTList node from Oblivion's synchronized global node pool, replenishing the pool when empty. This allocates list-node storage only; it does not allocate or retain a list payload.
0x7ABDF2: jmp     short loc_7ABDF9
0x7ABDF4: mov     ecx, [eax]
0x7ABDF6: mov     [esi+0Ch], ecx
0x7ABDF9: mov     edx, [esp+4+payloadAddress]
0x7ABDFD: mov     ecx, [edx]
0x7ABDFF: mov     [eax+8], ecx; Accumulator tail append stores the existing RenderPass pointer verbatim at node+0x08. No copy, ownership transfer, or reference count occurs.
0x7ABE02: mov     dword ptr [eax], 0
0x7ABE08: mov     edx, [esi+8]
0x7ABE0B: mov     [eax+4], edx; Link the new node after the current tail; this preserves caller traversal order inside accumulator selector buckets.
0x7ABE0E: mov     ecx, [esi+8]
0x7ABE11: test    ecx, ecx
0x7ABE13: jz      short loc_7ABE22
0x7ABE15: mov     [ecx], eax
0x7ABE17: add     dword ptr [esi+10h], 1
0x7ABE1B: mov     [esi+8], eax
0x7ABE1E: pop     esi
0x7ABE1F: retn    4
0x7ABE22: add     dword ptr [esi+10h], 1
0x7ABE26: mov     [esi+4], eax
0x7ABE29: mov     [esi+8], eax
0x7ABE2C: pop     esi
0x7ABE2D: retn    4
