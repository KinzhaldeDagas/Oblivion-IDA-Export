0x9A8DD0: push    ebx
0x9A8DD1: push    ebp
0x9A8DD2: mov     ebx, ecx
0x9A8DD4: movzx   ebp, word ptr [ebx+16h]
0x9A8DD8: push    esi
0x9A8DD9: push    edi
0x9A8DDA: xor     edi, edi
0x9A8DDC: test    ebp, ebp
0x9A8DDE: jbe     short loc_9A8E06
0x9A8DE0: mov     eax, [ebx+10h]
0x9A8DE3: mov     esi, [eax+edi*4]
0x9A8DE6: test    esi, esi
0x9A8DE8: jz      short loc_9A8DFF
0x9A8DEA: mov     eax, [esi+0Ch]
0x9A8DED: mov     ecx, [esp+10h+Str1]
0x9A8DF1: push    eax; Str2
0x9A8DF2: push    ecx; Str1
0x9A8DF3: call    __strcmp
0x9A8DF8: add     esp, 8
0x9A8DFB: test    eax, eax
0x9A8DFD: jz      short loc_9A8E0F
0x9A8DFF: add     edi, 1
0x9A8E02: cmp     edi, ebp
0x9A8E04: jb      short loc_9A8DE0
0x9A8E06: pop     edi
0x9A8E07: pop     esi
0x9A8E08: pop     ebp
0x9A8E09: xor     eax, eax
0x9A8E0B: pop     ebx
0x9A8E0C: retn    4
0x9A8E0F: pop     edi
0x9A8E10: mov     eax, esi
0x9A8E12: pop     esi
0x9A8E13: pop     ebp
0x9A8E14: pop     ebx
0x9A8E15: retn    4
