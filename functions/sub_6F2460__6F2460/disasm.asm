0x6F2460: push    ebp
0x6F2461: mov     ebp, [esp+4+arg_4]
0x6F2465: push    esi
0x6F2466: mov     esi, [esp+8+arg_0]
0x6F246A: cmp     esi, ebp
0x6F246C: jz      short loc_6F2491
0x6F246E: push    ebx
0x6F246F: push    edi
0x6F2470: mov     edi, [esp+10h+arg_8]
0x6F2474: lea     ebx, [edi+4]
0x6F2477: mov     eax, [edi]
0x6F2479: push    0FFFFFFFFh
0x6F247B: push    0
0x6F247D: push    ebx
0x6F247E: lea     ecx, [esi+4]
0x6F2481: mov     [esi], eax
0x6F2483: call    sub_414420
0x6F2488: add     esi, 20h ; ' '
0x6F248B: cmp     esi, ebp
0x6F248D: jnz     short loc_6F2477
0x6F248F: pop     edi
0x6F2490: pop     ebx
0x6F2491: pop     esi
0x6F2492: pop     ebp
0x6F2493: retn
