0x706BD0: push    esi
0x706BD1: push    edi
0x706BD2: mov     edi, [esp+8+arg_0]
0x706BD6: push    edi
0x706BD7: mov     esi, ecx
0x706BD9: call    sub_6D7E00
0x706BDE: test    al, al
0x706BE0: jz      short loc_706C12
0x706BE2: mov     al, [edi+18h]
0x706BE5: xor     al, [esi+18h]
0x706BE8: test    al, 1
0x706BEA: jnz     short loc_706C12
0x706BEC: movzx   eax, word ptr [edi+18h]
0x706BF0: movzx   ecx, word ptr [esi+18h]
0x706BF4: push    ebx
0x706BF5: mov     bl, cl
0x706BF7: mov     dl, al
0x706BF9: shr     bl, 1
0x706BFB: shr     dl, 1
0x706BFD: xor     dl, bl
0x706BFF: test    dl, 1
0x706C02: pop     ebx
0x706C03: jnz     short loc_706C12
0x706C05: xor     al, cl
0x706C07: test    al, 3Ch
0x706C09: jnz     short loc_706C12
0x706C0B: pop     edi
0x706C0C: mov     al, 1
0x706C0E: pop     esi
0x706C0F: retn    4
0x706C12: pop     edi
0x706C13: xor     al, al
0x706C15: pop     esi
0x706C16: retn    4
