0x6FE340: push    esi
0x6FE341: push    edi
0x6FE342: mov     edi, [esp+8+arg_0]
0x6FE346: mov     eax, edi
0x6FE348: lea     edx, [eax+1]
0x6FE34B: jmp     short loc_6FE350
0x6FE34D: align 10h
0x6FE350: mov     cl, [eax]
0x6FE352: add     eax, 1
0x6FE355: test    cl, cl
0x6FE357: jnz     short loc_6FE350
0x6FE359: sub     eax, edx
0x6FE35B: add     eax, 10h
0x6FE35E: push    eax; Size
0x6FE35F: call    FormHeapAlloc
0x6FE364: mov     esi, eax
0x6FE366: mov     eax, [esp+0Ch+arg_4]
0x6FE36A: add     esp, 4
0x6FE36D: sub     eax, 0
0x6FE370: jz      short loc_6FE3A8
0x6FE372: sub     eax, 1
0x6FE375: jz      short loc_6FE392
0x6FE377: sub     eax, 1
0x6FE37A: jnz     short loc_6FE3B7
0x6FE37C: push    edi
0x6FE37D: push    offset aSAt_nodes; "%s = AT_NODES"
0x6FE382: push    esi
0x6FE383: call    __sprintf
0x6FE388: add     esp, 0Ch
0x6FE38B: pop     edi
0x6FE38C: mov     eax, esi
0x6FE38E: pop     esi
0x6FE38F: retn    8
0x6FE392: push    edi
0x6FE393: push    offset aSAt_specificob; "%s = AT_SPECIFICOBJS"
0x6FE398: push    esi
0x6FE399: call    __sprintf
0x6FE39E: add     esp, 0Ch
0x6FE3A1: pop     edi
0x6FE3A2: mov     eax, esi
0x6FE3A4: pop     esi
0x6FE3A5: retn    8
0x6FE3A8: push    edi
0x6FE3A9: push    offset aSAt_vertices; "%s = AT_VERTICES"
0x6FE3AE: push    esi
0x6FE3AF: call    __sprintf
0x6FE3B4: add     esp, 0Ch
0x6FE3B7: pop     edi
0x6FE3B8: mov     eax, esi
0x6FE3BA: pop     esi
0x6FE3BB: retn    8
