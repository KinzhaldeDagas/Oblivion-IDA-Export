0x6D1C80: mov     eax, [esp+arg_4]
0x6D1C84: push    ebx
0x6D1C85: mov     ebx, [esp+4+arg_0]
0x6D1C89: push    esi
0x6D1C8A: push    edi
0x6D1C8B: push    eax
0x6D1C8C: push    ebx
0x6D1C8D: mov     edi, ecx
0x6D1C8F: call    sub_6ECB60
0x6D1C94: mov     ecx, [edi+54h]
0x6D1C97: mov     [ebx+54h], ecx
0x6D1C9A: movzx   eax, word ptr [edi+4Ah]
0x6D1C9E: xor     esi, esi
0x6D1CA0: test    eax, eax
0x6D1CA2: jbe     short loc_6D1CC6
0x6D1CA4: cmp     esi, eax
0x6D1CA6: jnb     short loc_6D1CB0
0x6D1CA8: mov     edx, [edi+44h]
0x6D1CAB: mov     eax, [edx+esi*4]
0x6D1CAE: jmp     short loc_6D1CB2
0x6D1CB0: xor     eax, eax
0x6D1CB2: push    esi
0x6D1CB3: push    eax
0x6D1CB4: mov     ecx, ebx
0x6D1CB6: call    sub_6D1BC0
0x6D1CBB: movzx   eax, word ptr [edi+4Ah]
0x6D1CBF: add     esi, 1
0x6D1CC2: cmp     esi, eax
0x6D1CC4: jb      short loc_6D1CA8
0x6D1CC6: pop     edi
0x6D1CC7: pop     esi
0x6D1CC8: pop     ebx
0x6D1CC9: retn    8
