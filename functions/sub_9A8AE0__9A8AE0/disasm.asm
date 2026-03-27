0x9A8AE0: push    esi
0x9A8AE1: push    edi; Src
0x9A8AE2: push    38h ; '8'; Size
0x9A8AE4: mov     edi, ecx
0x9A8AE6: call    FormHeapAlloc
0x9A8AEB: add     esp, 4
0x9A8AEE: test    eax, eax
0x9A8AF0: jz      short loc_9A8AFD
0x9A8AF2: mov     ecx, eax; this
0x9A8AF4: call    sub_9A84B0
0x9A8AF9: mov     esi, eax
0x9A8AFB: jmp     short loc_9A8AFF
0x9A8AFD: xor     esi, esi
0x9A8AFF: mov     eax, [esp+8+Src]
0x9A8B03: push    eax; Src
0x9A8B04: mov     ecx, esi; this
0x9A8B06: call    NiD3DShaderConstantMapEntry__SetKeyStringCopy
0x9A8B0B: mov     ecx, [esp+8+arg_4]
0x9A8B0F: mov     edx, [esp+8+arg_8]
0x9A8B13: mov     [esi+1Ch], ecx
0x9A8B16: push    edx; Src
0x9A8B17: mov     ecx, esi
0x9A8B19: call    sub_9A85C0
0x9A8B1E: mov     eax, [esp+8+arg_C]
0x9A8B22: mov     ecx, [esp+8+arg_10]
0x9A8B26: mov     [esi+18h], eax
0x9A8B29: movzx   edx, word_B42938[ecx*2]
0x9A8B31: or      edx, 60000000h
0x9A8B37: mov     [esi+14h], edx
0x9A8B3A: mov     eax, [edi]
0x9A8B3C: mov     edx, [eax+68h]
0x9A8B3F: push    esi
0x9A8B40: mov     ecx, edi
0x9A8B42: call    edx
0x9A8B44: test    eax, eax
0x9A8B46: mov     [edi+24h], eax
0x9A8B49: jnz     short loc_9A8B5D
0x9A8B4B: mov     eax, [edi]
0x9A8B4D: mov     edx, [eax+4Ch]
0x9A8B50: push    esi
0x9A8B51: mov     ecx, edi
0x9A8B53: call    edx
0x9A8B55: mov     [edi+24h], eax
0x9A8B58: pop     edi
0x9A8B59: pop     esi
0x9A8B5A: retn    14h
0x9A8B5D: mov     eax, [esi]
0x9A8B5F: mov     edx, [eax]
0x9A8B61: push    1
0x9A8B63: mov     ecx, esi
0x9A8B65: call    edx
0x9A8B67: mov     eax, [edi+24h]
0x9A8B6A: pop     edi
0x9A8B6B: pop     esi
0x9A8B6C: retn    14h
