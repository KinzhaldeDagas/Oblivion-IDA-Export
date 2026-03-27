0x4D6D40: push    esi
0x4D6D41: mov     esi, ecx
0x4D6D43: mov     eax, [esi]
0x4D6D45: mov     edx, [eax+170h]
0x4D6D4B: push    edi
0x4D6D4C: xor     edi, edi
0x4D6D4E: call    edx
0x4D6D50: test    eax, eax
0x4D6D52: jz      short loc_4D6DA2
0x4D6D54: mov     eax, [esi]
0x4D6D56: mov     edx, [eax+170h]
0x4D6D5C: mov     ecx, esi
0x4D6D5E: call    edx
0x4D6D60: movzx   eax, byte ptr [eax+4]
0x4D6D64: cmp     eax, 17h
0x4D6D67: jz      short loc_4D6D8C
0x4D6D69: add     eax, 0FFFFFFDDh
0x4D6D6C: cmp     eax, 1
0x4D6D6F: ja      short loc_4D6DA2
0x4D6D71: mov     eax, [esi]
0x4D6D73: mov     edx, [eax+170h]
0x4D6D79: mov     ecx, esi
0x4D6D7B: call    edx
0x4D6D7D: test    eax, eax
0x4D6D7F: jz      short loc_4D6D87
0x4D6D81: pop     edi
0x4D6D82: add     eax, 44h ; 'D'
0x4D6D85: pop     esi
0x4D6D86: retn
0x4D6D87: pop     edi
0x4D6D88: xor     eax, eax
0x4D6D8A: pop     esi
0x4D6D8B: retn
0x4D6D8C: mov     eax, [esi]
0x4D6D8E: mov     edx, [eax+170h]
0x4D6D94: mov     ecx, esi
0x4D6D96: call    edx
0x4D6D98: test    eax, eax
0x4D6D9A: jz      short loc_4D6D87
0x4D6D9C: pop     edi
0x4D6D9D: add     eax, 24h ; '$'
0x4D6DA0: pop     esi
0x4D6DA1: retn
0x4D6DA2: mov     eax, edi
0x4D6DA4: pop     edi
0x4D6DA5: pop     esi
0x4D6DA6: retn
