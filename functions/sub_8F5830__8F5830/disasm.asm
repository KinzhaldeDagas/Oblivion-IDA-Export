0x8F5830: push    esi
0x8F5831: mov     esi, [esp+4+arg_0]
0x8F5835: mov     eax, [esi+8]
0x8F5838: push    edi
0x8F5839: mov     edi, ecx
0x8F583B: mov     ecx, [esi+4]
0x8F583E: and     eax, 3FFFFFFFh
0x8F5843: cmp     ecx, eax
0x8F5845: jnz     short loc_8F5852
0x8F5847: push    4
0x8F5849: push    esi
0x8F584A: call    sub_8A6EE0
0x8F584F: add     esp, 8
0x8F5852: mov     eax, [edi+18h]
0x8F5855: mov     ecx, [esi+4]
0x8F5858: mov     edx, [esi]
0x8F585A: mov     [edx+ecx*4], eax
0x8F585D: mov     eax, [esi+4]
0x8F5860: inc     eax
0x8F5861: pop     edi
0x8F5862: mov     [esi+4], eax
0x8F5865: pop     esi
0x8F5866: retn    4
