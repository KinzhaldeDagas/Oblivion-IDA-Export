0x7C53B0: cmp     byte ptr ds:0B43070h, 0
0x7C53B7: jz      short loc_7C5437
0x7C53B9: push    ebx
0x7C53BA: push    ebp
0x7C53BB: push    esi
0x7C53BC: push    edi
0x7C53BD: mov     edi, [esp+10h+arg_0]
0x7C53C1: lea     eax, [esp+10h+arg_0]
0x7C53C5: push    eax
0x7C53C6: mov     ecx, edi
0x7C53C8: call    sub_405760
0x7C53CD: mov     ebx, [eax]
0x7C53CF: mov     eax, [esp+10h+arg_0]
0x7C53D3: test    eax, eax
0x7C53D5: mov     ebp, ds:0A2807Ch
0x7C53DB: jz      short loc_7C53F7
0x7C53DD: mov     esi, eax
0x7C53DF: add     eax, 4
0x7C53E2: push    eax; lpAddend
0x7C53E3: call    ebp ; InterlockedDecrement
0x7C53E5: test    eax, eax
0x7C53E7: jnz     short loc_7C53F7
0x7C53E9: test    esi, esi
0x7C53EB: jz      short loc_7C53F7
0x7C53ED: mov     edx, [esi]
0x7C53EF: mov     eax, [edx]
0x7C53F1: push    1
0x7C53F3: mov     ecx, esi
0x7C53F5: call    eax
0x7C53F7: test    ebx, ebx
0x7C53F9: jnz     short loc_7C542E
0x7C53FB: mov     ecx, edi; this
0x7C53FD: call    NiAVObject_InitializePropertyState
0x7C5402: lea     ecx, [esp+10h+arg_0]
0x7C5406: push    ecx
0x7C5407: mov     ecx, edi
0x7C5409: call    sub_405760
0x7C540E: mov     esi, [esp+10h+arg_0]
0x7C5412: test    esi, esi
0x7C5414: jz      short loc_7C542E
0x7C5416: lea     edx, [esi+4]
0x7C5419: push    edx; lpAddend
0x7C541A: call    ebp ; InterlockedDecrement
0x7C541C: test    eax, eax
0x7C541E: jnz     short loc_7C542E
0x7C5420: test    esi, esi
0x7C5422: jz      short loc_7C542E
0x7C5424: mov     eax, [esi]
0x7C5426: mov     edx, [eax]
0x7C5428: push    1
0x7C542A: mov     ecx, esi
0x7C542C: call    edx
0x7C542E: pop     edi
0x7C542F: pop     esi
0x7C5430: pop     ebp
0x7C5431: mov     al, 1
0x7C5433: pop     ebx
0x7C5434: retn    4
0x7C5437: mov     al, 1
0x7C5439: retn    4
