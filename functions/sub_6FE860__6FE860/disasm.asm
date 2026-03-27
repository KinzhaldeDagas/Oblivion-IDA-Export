0x6FE860: mov     eax, [esp+arg_4]
0x6FE864: push    ebx
0x6FE865: mov     ebx, [esp+4+arg_0]
0x6FE869: push    esi
0x6FE86A: push    edi
0x6FE86B: push    eax
0x6FE86C: push    ebx
0x6FE86D: mov     edi, ecx
0x6FE86F: call    sub_753000
0x6FE874: movzx   esi, word ptr [edi+62h]
0x6FE878: test    esi, esi
0x6FE87A: jz      short loc_6FE89D
0x6FE87C: add     ebx, 58h ; 'X'
0x6FE87F: push    esi
0x6FE880: mov     ecx, ebx
0x6FE882: call    sub_523B10
0x6FE887: mov     ecx, [edi+5Ch]
0x6FE88A: sub     esi, 1
0x6FE88D: lea     edx, [ecx+esi*4]
0x6FE890: push    edx
0x6FE891: push    esi
0x6FE892: mov     ecx, ebx
0x6FE894: call    sub_4B34E0
0x6FE899: test    esi, esi
0x6FE89B: jnz     short loc_6FE887
0x6FE89D: pop     edi
0x6FE89E: pop     esi
0x6FE89F: pop     ebx
0x6FE8A0: retn    8
