0x778D50: push    esi
0x778D51: push    edi
0x778D52: mov     edi, [esp+8+arg_0]
0x778D56: test    edi, edi
0x778D58: mov     esi, ecx
0x778D5A: jz      short loc_778DA7
0x778D5C: mov     eax, [esi]
0x778D5E: mov     edx, [eax+0Ch]
0x778D61: push    edi
0x778D62: call    edx
0x778D64: test    al, al
0x778D66: jz      short loc_778DA7
0x778D68: mov     ecx, [esi+0Ch]
0x778D6B: xor     eax, eax
0x778D6D: test    ecx, ecx
0x778D6F: jbe     short loc_778D82
0x778D71: mov     edx, [esi+4]
0x778D74: cmp     [edx], edi
0x778D76: jz      short loc_778D85
0x778D78: add     eax, 1
0x778D7B: add     edx, 4
0x778D7E: cmp     eax, ecx
0x778D80: jb      short loc_778D74
0x778D82: or      eax, 0FFFFFFFFh
0x778D85: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x778D89: mov     ecx, [esi+0Ch]
0x778D8C: mov     esi, [esi+4]
0x778D8F: mov     ecx, [esi+ecx*4]
0x778D92: mov     [esi+eax*4], ecx
0x778D95: mov     edx, [edi]
0x778D97: mov     eax, [edx+24h]
0x778D9A: push    1
0x778D9C: mov     ecx, edi
0x778D9E: call    eax
0x778DA0: pop     edi
0x778DA1: mov     al, 1
0x778DA3: pop     esi
0x778DA4: retn    4
0x778DA7: pop     edi
0x778DA8: xor     al, al
0x778DAA: pop     esi
0x778DAB: retn    4
