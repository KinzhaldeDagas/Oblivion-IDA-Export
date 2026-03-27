0x4FD370: push    ebx
0x4FD371: mov     ebx, [esp+4+arg_0]
0x4FD375: push    ebp
0x4FD376: push    esi
0x4FD377: lea     ecx, [ebx+50h]
0x4FD37A: xor     eax, eax
0x4FD37C: xor     esi, esi
0x4FD37E: test    ecx, ecx
0x4FD380: push    edi; ArgList
0x4FD381: mov     edi, [esp+10h+arg_4]
0x4FD385: jz      short loc_4FD3D4
0x4FD387: mov     edx, [ecx+4]
0x4FD38A: test    edx, edx
0x4FD38C: jnz     short loc_4FD392
0x4FD38E: cmp     [ecx], edx
0x4FD390: jz      short loc_4FD3D0
0x4FD392: test    esi, esi
0x4FD394: jnz     short loc_4FD3E8
0x4FD396: mov     ecx, [ecx]
0x4FD398: mov     ebp, [ecx]
0x4FD39A: cmp     ebp, [edi]
0x4FD39C: jbe     short loc_4FD3CA
0x4FD39E: mov     ecx, [ecx+410h]
0x4FD3A4: cmp     ecx, 14h
0x4FD3A7: jg      short loc_4FD3BF
0x4FD3A9: cmp     ecx, 12h
0x4FD3AC: jge     short loc_4FD3CA
0x4FD3AE: sub     ecx, 10h
0x4FD3B1: jz      short loc_4FD3EF
0x4FD3B3: sub     ecx, 1
0x4FD3B6: jnz     short loc_4FD3C7
0x4FD3B8: mov     esi, 1
0x4FD3BD: jmp     short loc_4FD3CA
0x4FD3BF: cmp     ecx, 0FFFFh
0x4FD3C5: jz      short loc_4FD407
0x4FD3C7: add     eax, 1
0x4FD3CA: mov     ecx, edx
0x4FD3CC: test    ecx, ecx
0x4FD3CE: jnz     short loc_4FD387
0x4FD3D0: test    esi, esi
0x4FD3D2: jnz     short loc_4FD3E8
0x4FD3D4: mov     ecx, [edi]
0x4FD3D6: push    ecx; ArgList
0x4FD3D7: push    offset aMismatchedBegi; "Mismatched begin/end block starting on "...
0x4FD3DC: push    ebx; int
0x4FD3DD: call    sub_4FCE30
0x4FD3E2: add     esp, 0Ch
0x4FD3E5: or      eax, 0FFFFFFFFh
0x4FD3E8: pop     edi
0x4FD3E9: pop     esi
0x4FD3EA: pop     ebp
0x4FD3EB: pop     ebx
0x4FD3EC: retn    8
0x4FD3EF: push    offset aNestedBeginEnd; "Nested begin/end blocks are not allowed"...
0x4FD3F4: push    ebx; int
0x4FD3F5: call    sub_4FCE30
0x4FD3FA: add     esp, 8
0x4FD3FD: pop     edi
0x4FD3FE: pop     esi
0x4FD3FF: pop     ebp
0x4FD400: or      eax, 0FFFFFFFFh
0x4FD403: pop     ebx
0x4FD404: retn    8
0x4FD407: mov     eax, [edi]
0x4FD409: push    eax; ArgList
0x4FD40A: push    offset aBeginWithoutMa; "Begin without matching end starting on "...
0x4FD40F: push    ebx; int
0x4FD410: call    sub_4FCE30
0x4FD415: add     esp, 0Ch
0x4FD418: pop     edi
0x4FD419: pop     esi
0x4FD41A: pop     ebp
0x4FD41B: or      eax, 0FFFFFFFFh
0x4FD41E: pop     ebx
0x4FD41F: retn    8
