0x8E7D10: push    esi
0x8E7D11: mov     esi, [esp+4+arg_0]
0x8E7D15: mov     eax, [esi+8]
0x8E7D18: push    edi
0x8E7D19: mov     edi, ecx
0x8E7D1B: mov     ecx, [esi+4]
0x8E7D1E: and     eax, 3FFFFFFFh
0x8E7D23: cmp     ecx, eax
0x8E7D25: jnz     short loc_8E7D32
0x8E7D27: push    4
0x8E7D29: push    esi
0x8E7D2A: call    sub_8A6EE0
0x8E7D2F: add     esp, 8
0x8E7D32: mov     ecx, [esi+4]
0x8E7D35: mov     eax, [edi+18h]
0x8E7D38: mov     edx, [esi]
0x8E7D3A: mov     [edx+ecx*4], eax
0x8E7D3D: mov     eax, [esi+4]
0x8E7D40: mov     ecx, [esi+8]
0x8E7D43: inc     eax
0x8E7D44: and     ecx, 3FFFFFFFh
0x8E7D4A: cmp     eax, ecx
0x8E7D4C: mov     [esi+4], eax
0x8E7D4F: jnz     short loc_8E7D5C
0x8E7D51: push    4
0x8E7D53: push    esi
0x8E7D54: call    sub_8A6EE0
0x8E7D59: add     esp, 8
0x8E7D5C: mov     edx, [esi+4]
0x8E7D5F: mov     eax, [esi]
0x8E7D61: mov     ecx, [edi+1Ch]
0x8E7D64: mov     [eax+edx*4], ecx
0x8E7D67: mov     eax, [esi+4]
0x8E7D6A: inc     eax
0x8E7D6B: pop     edi
0x8E7D6C: mov     [esi+4], eax
0x8E7D6F: pop     esi
0x8E7D70: retn    4
