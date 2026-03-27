0x7FA470: push    ebp
0x7FA471: mov     ebp, ecx
0x7FA473: push    esi
0x7FA474: or      esi, 0FFFFFFFFh
0x7FA477: mov     eax, 2
0x7FA47C: lea     ecx, [ebp+80h]
0x7FA482: cmp     esi, 0FFFFFFFFh
0x7FA485: jnz     short loc_7FA4CF
0x7FA487: cmp     dword ptr [ecx-4], 0
0x7FA48B: jnz     short loc_7FA495
0x7FA48D: lea     esi, [eax-2]
0x7FA490: cmp     esi, 0FFFFFFFFh
0x7FA493: jnz     short loc_7FA4CF
0x7FA495: cmp     dword ptr [ecx], 0
0x7FA498: jnz     short loc_7FA4A2
0x7FA49A: lea     esi, [eax-1]
0x7FA49D: cmp     esi, 0FFFFFFFFh
0x7FA4A0: jnz     short loc_7FA4CF
0x7FA4A2: cmp     dword ptr [ecx+4], 0
0x7FA4A6: jnz     short loc_7FA4AF
0x7FA4A8: cmp     eax, 0FFFFFFFFh
0x7FA4AB: mov     esi, eax
0x7FA4AD: jnz     short loc_7FA4CF
0x7FA4AF: cmp     dword ptr [ecx+8], 0
0x7FA4B3: jnz     short loc_7FA4B8
0x7FA4B5: lea     esi, [eax+1]
0x7FA4B8: add     eax, 4
0x7FA4BB: lea     edx, [eax-2]
0x7FA4BE: add     ecx, 10h
0x7FA4C1: cmp     edx, 10h
0x7FA4C4: jb      short loc_7FA482
0x7FA4C6: cmp     esi, 0FFFFFFFFh
0x7FA4C9: jz      loc_7FA56F
0x7FA4CF: push    edi
0x7FA4D0: mov     edi, [esp+0Ch+a2]
0x7FA4D4: test    edi, edi
0x7FA4D6: jz      loc_7FA56E
0x7FA4DC: mov     eax, [edi]
0x7FA4DE: mov     edx, [eax+4]
0x7FA4E1: push    ebx
0x7FA4E2: mov     ecx, edi
0x7FA4E4: call    edx
0x7FA4E6: test    eax, eax
0x7FA4E8: jz      short loc_7FA4FE
0x7FA4EA: lea     ebx, [ebx+0]
0x7FA4F0: cmp     eax, offset dword_B3F95C
0x7FA4F5: jz      short loc_7FA525
0x7FA4F7: mov     eax, [eax+4]
0x7FA4FA: test    eax, eax
0x7FA4FC: jnz     short loc_7FA4F0
0x7FA4FE: mov     edx, [edi]
0x7FA500: mov     eax, [edx+4]
0x7FA503: mov     ecx, edi
0x7FA505: call    eax
0x7FA507: test    eax, eax
0x7FA509: jz      short loc_7FA56D
0x7FA50B: jmp     short loc_7FA510
0x7FA50D: align 10h
0x7FA510: cmp     eax, offset unk_B3FF04
0x7FA515: jz      short loc_7FA537
0x7FA517: mov     eax, [eax+4]
0x7FA51A: test    eax, eax
0x7FA51C: jnz     short loc_7FA510
0x7FA51E: pop     ebx
0x7FA51F: pop     edi
0x7FA520: pop     esi
0x7FA521: pop     ebp
0x7FA522: retn    4
0x7FA525: mov     ebx, [ebp+esi*4+7Ch]
0x7FA529: cmp     ebx, edi
0x7FA52B: jz      short loc_7FA56D
0x7FA52D: test    ebx, ebx
0x7FA52F: jz      short loc_7FA55F
0x7FA531: lea     eax, [ebx+4]
0x7FA534: push    eax
0x7FA535: jmp     short loc_7FA547
0x7FA537: mov     ebx, [ebp+esi*4+7Ch]
0x7FA53B: cmp     ebx, edi
0x7FA53D: jz      short loc_7FA56D
0x7FA53F: test    ebx, ebx
0x7FA541: jz      short loc_7FA55F
0x7FA543: lea     ecx, [ebx+4]
0x7FA546: push    ecx; lpAddend
0x7FA547: call    dword ptr ds:0A2807Ch
0x7FA54D: test    eax, eax
0x7FA54F: jnz     short loc_7FA55F
0x7FA551: test    ebx, ebx
0x7FA553: jz      short loc_7FA55F
0x7FA555: mov     edx, [ebx]
0x7FA557: mov     eax, [edx]
0x7FA559: push    1
0x7FA55B: mov     ecx, ebx
0x7FA55D: call    eax
0x7FA55F: mov     [ebp+esi*4+7Ch], edi
0x7FA563: add     edi, 4
0x7FA566: push    edi; lpAddend
0x7FA567: call    dword ptr ds:0A28078h
0x7FA56D: pop     ebx
0x7FA56E: pop     edi
0x7FA56F: pop     esi
0x7FA570: pop     ebp
0x7FA571: retn    4
