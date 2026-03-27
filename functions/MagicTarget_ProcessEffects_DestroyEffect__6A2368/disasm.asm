0x6A2368: mov     eax, [edi]
0x6A236A: mov     edx, [eax+8]
0x6A236D: mov     ecx, edi
0x6A236F: call    edx
0x6A2371: cmp     ebp, eax
0x6A2373: jnz     short loc_6A2377
0x6A2375: mov     ebx, ebp
0x6A2377: mov     eax, [edi]
0x6A2379: mov     edx, [eax+8]
0x6A237C: push    esi
0x6A237D: mov     ecx, edi
0x6A237F: call    edx
0x6A2381: mov     ecx, eax
0x6A2383: call    BSSimpleList_Remove
0x6A2388: mov     eax, [edi]
0x6A238A: mov     edx, [eax+14h]
0x6A238D: push    esi
0x6A238E: mov     ecx, edi
0x6A2390: call    edx
0x6A2392: mov     eax, [esi]
0x6A2394: mov     edx, [eax]
0x6A2396: push    1
0x6A2398: mov     ecx, esi
0x6A239A: call    edx
