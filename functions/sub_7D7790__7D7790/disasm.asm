0x7D7790: mov     eax, [ecx+0C0h]
0x7D7796: mov     ecx, [esp+arg_0]
0x7D779A: push    ebx
0x7D779B: mov     ebx, [esp+4+arg_4]
0x7D779F: push    esi
0x7D77A0: mov     esi, [eax+ecx*4]
0x7D77A3: cmp     esi, ebx
0x7D77A5: push    edi
0x7D77A6: lea     edi, [eax+ecx*4]
0x7D77A9: jz      short loc_7D77DB
0x7D77AB: test    esi, esi
0x7D77AD: jz      short loc_7D77CB
0x7D77AF: lea     edx, [esi+4]
0x7D77B2: push    edx; lpAddend
0x7D77B3: call    dword ptr ds:0A2807Ch
0x7D77B9: test    eax, eax
0x7D77BB: jnz     short loc_7D77CB
0x7D77BD: test    esi, esi
0x7D77BF: jz      short loc_7D77CB
0x7D77C1: mov     eax, [esi]
0x7D77C3: mov     edx, [eax]
0x7D77C5: push    1
0x7D77C7: mov     ecx, esi
0x7D77C9: call    edx
0x7D77CB: test    ebx, ebx
0x7D77CD: mov     [edi], ebx
0x7D77CF: jz      short loc_7D77DB
0x7D77D1: add     ebx, 4
0x7D77D4: push    ebx; lpAddend
0x7D77D5: call    dword ptr ds:0A28078h
0x7D77DB: pop     edi
0x7D77DC: pop     esi
0x7D77DD: pop     ebx
0x7D77DE: retn    8
