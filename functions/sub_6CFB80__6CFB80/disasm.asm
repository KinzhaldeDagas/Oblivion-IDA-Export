0x6CFB80: push    ebp
0x6CFB81: mov     ebp, [esp+4+arg_0]
0x6CFB85: test    ebp, ebp
0x6CFB87: jnz     short loc_6CFB93
0x6CFB89: mov     ax, ds:0A7A160h
0x6CFB8F: pop     ebp
0x6CFB90: retn    4
0x6CFB93: push    ebx
0x6CFB94: push    esi
0x6CFB95: movzx   esi, word ptr [ecx+44h]
0x6CFB99: xor     eax, eax
0x6CFB9B: test    si, si
0x6CFB9E: push    edi
0x6CFB9F: jbe     short loc_6CFBE8
0x6CFBA1: mov     edi, [ecx+40h]
0x6CFBA4: movzx   ecx, ax
0x6CFBA7: cmp     dword ptr [edi+ecx*4], 0
0x6CFBAB: lea     ecx, [edi+ecx*4]
0x6CFBAE: jz      short loc_6CFBE0
0x6CFBB0: mov     ecx, [ecx]
0x6CFBB2: mov     ecx, [ecx+8]
0x6CFBB5: mov     edx, ebp
0x6CFBB7: mov     bl, [ecx]
0x6CFBB9: cmp     bl, [edx]
0x6CFBBB: jnz     short loc_6CFBD7
0x6CFBBD: test    bl, bl
0x6CFBBF: jz      short loc_6CFBD3
0x6CFBC1: mov     bl, [ecx+1]
0x6CFBC4: cmp     bl, [edx+1]
0x6CFBC7: jnz     short loc_6CFBD7
0x6CFBC9: add     ecx, 2
0x6CFBCC: add     edx, 2
0x6CFBCF: test    bl, bl
0x6CFBD1: jnz     short loc_6CFBB7
0x6CFBD3: xor     ecx, ecx
0x6CFBD5: jmp     short loc_6CFBDC
0x6CFBD7: sbb     ecx, ecx
0x6CFBD9: sbb     ecx, 0FFFFFFFFh
0x6CFBDC: test    ecx, ecx
0x6CFBDE: jz      short loc_6CFBEE
0x6CFBE0: add     eax, 1
0x6CFBE3: cmp     ax, si
0x6CFBE6: jb      short loc_6CFBA4
0x6CFBE8: mov     ax, ds:0A7A160h
0x6CFBEE: pop     edi
0x6CFBEF: pop     esi
0x6CFBF0: pop     ebx
0x6CFBF1: pop     ebp
0x6CFBF2: retn    4
