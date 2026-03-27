0x6FD750: mov     eax, [esp+arg_0]
0x6FD754: push    ebx
0x6FD755: push    ebp
0x6FD756: push    eax
0x6FD757: mov     ebx, ecx
0x6FD759: call    sub_715E70
0x6FD75E: xor     ebp, ebp
0x6FD760: cmp     [ebx+4Eh], bp
0x6FD764: jbe     short loc_6FD7A8
0x6FD766: push    esi
0x6FD767: push    edi
0x6FD768: mov     ecx, [ebx+48h]
0x6FD76B: mov     esi, [ecx+ebp*4]
0x6FD76E: test    esi, esi
0x6FD770: jz      short loc_6FD79B
0x6FD772: xor     edi, edi
0x6FD774: cmp     [esi+8], edi
0x6FD777: jbe     short loc_6FD79B
0x6FD779: lea     esp, [esp+0]
0x6FD780: mov     ecx, [esp+10h+arg_0]
0x6FD784: call    sub_7124A0
0x6FD789: cmp     edi, [esi+8]
0x6FD78C: jnb     short loc_6FD793
0x6FD78E: mov     edx, [esi]
0x6FD790: mov     [edx+edi*4], eax
0x6FD793: add     edi, 1
0x6FD796: cmp     edi, [esi+8]
0x6FD799: jb      short loc_6FD780
0x6FD79B: movzx   eax, word ptr [ebx+4Eh]
0x6FD79F: add     ebp, 1
0x6FD7A2: cmp     ebp, eax
0x6FD7A4: jb      short loc_6FD768
0x6FD7A6: pop     edi
0x6FD7A7: pop     esi
0x6FD7A8: pop     ebp
0x6FD7A9: pop     ebx
0x6FD7AA: retn    4
