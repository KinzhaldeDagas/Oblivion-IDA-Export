0x4CA340: push    ebx
0x4CA341: push    esi
0x4CA342: mov     ebx, ecx
0x4CA344: mov     esi, [ebx+0C0h]
0x4CA34A: push    edi
0x4CA34B: mov     edi, [esp+0Ch+arg_0]
0x4CA34F: cmp     esi, edi
0x4CA351: jz      short loc_4CA387
0x4CA353: test    esi, esi
0x4CA355: jz      short loc_4CA373
0x4CA357: lea     eax, [esi+4]
0x4CA35A: push    eax; lpAddend
0x4CA35B: call    dword ptr ds:0A2807Ch
0x4CA361: test    eax, eax
0x4CA363: jnz     short loc_4CA373
0x4CA365: test    esi, esi
0x4CA367: jz      short loc_4CA373
0x4CA369: mov     edx, [esi]
0x4CA36B: mov     eax, [edx]
0x4CA36D: push    1
0x4CA36F: mov     ecx, esi
0x4CA371: call    eax
0x4CA373: test    edi, edi
0x4CA375: mov     [ebx+0C0h], edi
0x4CA37B: jz      short loc_4CA387
0x4CA37D: add     edi, 4
0x4CA380: push    edi; lpAddend
0x4CA381: call    dword ptr ds:0A28078h
0x4CA387: pop     edi
0x4CA388: pop     esi
0x4CA389: pop     ebx
0x4CA38A: retn    4
