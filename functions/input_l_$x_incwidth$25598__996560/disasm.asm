0x996560: dec     dword ptr [ebp-0Ch]
0x996563: jnz     short loc_99656F
0x996565: test    ecx, ecx
0x996567: jz      short loc_99656F
0x996569: mov     byte ptr [ebp+3], 1
0x99656D: jmp     short loc_99657F
0x99656F: mov     edx, [ebp-14h]
0x996572: inc     dword ptr [ebp+4]
0x996575: call    __inc
0x99657A: mov     ebx, eax
0x99657C: mov     [ebp-4], ebx
0x99657F: cmp     ebx, 30h ; '0'
0x996582: jnz     __input_l___$getnum$25615
0x996588: mov     edx, [ebp-14h]
0x99658B: inc     dword ptr [ebp+4]
0x99658E: call    __inc
0x996593: mov     ebx, eax
0x996595: cmp     bl, 78h ; 'x'
0x996598: mov     [ebp-4], ebx
0x99659B: jz      short loc_9965E4
0x99659D: cmp     bl, 58h ; 'X'
0x9965A0: jz      short loc_9965E4
0x9965A2: cmp     dword ptr [ebp-20h], 78h ; 'x'
0x9965A6: mov     dword ptr [ebp-1Ch], 1
0x9965AD: jz      short loc_9965C9
0x9965AF: cmp     dword ptr [ebp-2Ch], 0
0x9965B3: jz      short loc_9965BD
0x9965B5: dec     dword ptr [ebp-0Ch]
0x9965B8: jnz     short loc_9965BD
0x9965BA: inc     byte ptr [ebp+3]
0x9965BD: mov     dword ptr [ebp-20h], 6Fh ; 'o'
0x9965C4: jmp     __input_l___$getnum$25615
0x9965C9: dec     dword ptr [ebp+4]
0x9965CC: cmp     ebx, 0FFFFFFFFh
0x9965CF: jz      short loc_9965DC
0x9965D1: push    dword ptr [ebp-14h]; File
0x9965D4: push    ebx; Ch
0x9965D5: call    __ungetc_nolock
0x9965DA: pop     ecx
0x9965DB: pop     ecx
0x9965DC: push    30h ; '0'
0x9965DE: pop     ebx
0x9965DF: jmp     loc_9966A2
0x9965E4: mov     edx, [ebp-14h]
0x9965E7: inc     dword ptr [ebp+4]
0x9965EA: call    __inc
0x9965EF: cmp     dword ptr [ebp-2Ch], 0
0x9965F3: mov     ebx, eax
0x9965F5: mov     [ebp-4], ebx
0x9965F8: jz      short loc_996607
0x9965FA: sub     dword ptr [ebp-0Ch], 2
0x9965FE: cmp     dword ptr [ebp-0Ch], 1
0x996602: jge     short loc_996607
0x996604: inc     byte ptr [ebp+3]
0x996607: mov     dword ptr [ebp-20h], 78h ; 'x'
0x99660E: jmp     __input_l___$getnum$25615
