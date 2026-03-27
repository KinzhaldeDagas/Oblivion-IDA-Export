0x6CCCC0: push    esi
0x6CCCC1: push    edi
0x6CCCC2: mov     edi, [esp+8+arg_0]
0x6CCCC6: push    edi
0x6CCCC7: mov     esi, ecx
0x6CCCC9: call    sub_6E7270
0x6CCCCE: test    al, al
0x6CCCD0: jnz     short loc_6CCCD7
0x6CCCD2: pop     edi
0x6CCCD3: pop     esi
0x6CCCD4: retn    4
0x6CCCD7: test    byte ptr [esi+0Ch], 1
0x6CCCDB: jnz     short loc_6CCD08
0x6CCCDD: push    ebx
0x6CCCDE: xor     bl, bl
0x6CCCE0: cmp     [esi+0Dh], bl
0x6CCCE3: jbe     short loc_6CCD07
0x6CCCE5: mov     ecx, [esi+14h]
0x6CCCE8: movzx   eax, bl
0x6CCCEB: lea     eax, [eax+eax*2]
0x6CCCEE: lea     eax, [ecx+eax*8]
0x6CCCF1: mov     ecx, [eax]
0x6CCCF3: test    ecx, ecx
0x6CCCF5: jz      short loc_6CCCFF
0x6CCCF7: mov     edx, [ecx]
0x6CCCF9: mov     eax, [edx+24h]
0x6CCCFC: push    edi
0x6CCCFD: call    eax
0x6CCCFF: add     bl, 1
0x6CCD02: cmp     bl, [esi+0Dh]
0x6CCD05: jb      short loc_6CCCE5
0x6CCD07: pop     ebx
0x6CCD08: pop     edi
0x6CCD09: mov     al, 1
0x6CCD0B: pop     esi
0x6CCD0C: retn    4
