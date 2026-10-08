0x7AD1C0: mov     ecx, [esp+arg_0]; this
0x7AD1C4: test    ecx, ecx
0x7AD1C6: jz      short locret_7AD1D9
0x7AD1C8: cmp     [esp+payloadAddress], 0
0x7AD1CD: jz      short locret_7AD1D9
0x7AD1CF: lea     eax, [esp+payloadAddress]
0x7AD1D3: push    eax; payloadAddress
0x7AD1D4: call    BSTPersistentList_AppendTailReusingFreeNode; BSTPersistentList tail append. Reuses a local free node or acquires one, stores the caller's payload pointer verbatim at node+0x08, links at tail, and increments count. For accumulator RenderPass buckets this creates a non-owning pointer borrow; it does not copy, retain, or destroy the RenderPass.
0x7AD1D9: retn    8
