0x6FD7E0: push    ecx
0x6FD7E1: push    ebx
0x6FD7E2: mov     ebx, [esp+8+arg_0]
0x6FD7E6: push    edi
0x6FD7E7: mov     edi, ecx
0x6FD7E9: push    ebx
0x6FD7EA: mov     [esp+10h+var_4], edi
0x6FD7EE: call    sub_715820
0x6FD7F3: test    al, al
0x6FD7F5: jnz     short loc_6FD7FF
0x6FD7F7: pop     edi
0x6FD7F8: xor     al, al
0x6FD7FA: pop     ebx
0x6FD7FB: pop     ecx
0x6FD7FC: retn    4
0x6FD7FF: mov     eax, [edi+3Ch]
0x6FD802: cmp     eax, [ebx+3Ch]
0x6FD805: jnz     short loc_6FD7F7
0x6FD807: mov     ecx, [edi+40h]
0x6FD80A: cmp     ecx, [ebx+40h]
0x6FD80D: jnz     short loc_6FD7F7
0x6FD80F: movzx   eax, word ptr [edi+4Eh]
0x6FD813: cmp     ax, [ebx+4Eh]
0x6FD817: jnz     short loc_6FD7F7
0x6FD819: push    ebp
0x6FD81A: xor     ebp, ebp
0x6FD81C: test    ax, ax
0x6FD81F: push    esi
0x6FD820: ja      short loc_6FD834
0x6FD822: pop     esi
0x6FD823: pop     ebp
0x6FD824: pop     edi
0x6FD825: mov     al, 1
0x6FD827: pop     ebx
0x6FD828: pop     ecx
0x6FD829: retn    4
0x6FD82C: align 10h
0x6FD830: mov     ebx, [esp+14h+arg_0]
0x6FD834: mov     edx, [edi+48h]
0x6FD837: mov     esi, [edx+ebp*4]
0x6FD83A: test    esi, esi
0x6FD83C: mov     eax, [ebx+48h]
0x6FD83F: mov     ebx, [eax+ebp*4]
0x6FD842: jz      short loc_6FD89F
0x6FD844: test    ebx, ebx
0x6FD846: jz      short loc_6FD8A3
0x6FD848: mov     eax, [esi+8]
0x6FD84B: cmp     eax, [ebx+8]
0x6FD84E: jnz     short loc_6FD8A3
0x6FD850: xor     edi, edi
0x6FD852: test    eax, eax
0x6FD854: jbe     short loc_6FD886
0x6FD856: jmp     short loc_6FD860
0x6FD858: align 10h
0x6FD860: mov     ecx, [esi]
0x6FD862: mov     eax, [ebx]
0x6FD864: lea     edx, ds:0[edi*4]
0x6FD86B: mov     ecx, [edx+ecx]
0x6FD86E: add     eax, edx
0x6FD870: mov     edx, [ecx]
0x6FD872: mov     eax, [eax]
0x6FD874: mov     edx, [edx+2Ch]
0x6FD877: push    eax
0x6FD878: call    edx
0x6FD87A: test    al, al
0x6FD87C: jz      short loc_6FD8A3
0x6FD87E: add     edi, 1
0x6FD881: cmp     edi, [esi+8]
0x6FD884: jb      short loc_6FD860
0x6FD886: mov     edi, [esp+14h+var_4]
0x6FD88A: movzx   eax, word ptr [edi+4Eh]
0x6FD88E: add     ebp, 1
0x6FD891: cmp     ebp, eax
0x6FD893: jb      short loc_6FD830
0x6FD895: pop     esi
0x6FD896: pop     ebp
0x6FD897: pop     edi
0x6FD898: mov     al, 1
0x6FD89A: pop     ebx
0x6FD89B: pop     ecx
0x6FD89C: retn    4
0x6FD89F: test    ebx, ebx
0x6FD8A1: jz      short loc_6FD88A
0x6FD8A3: pop     esi
0x6FD8A4: pop     ebp
0x6FD8A5: pop     edi
0x6FD8A6: xor     al, al
0x6FD8A8: pop     ebx
0x6FD8A9: pop     ecx
0x6FD8AA: retn    4
