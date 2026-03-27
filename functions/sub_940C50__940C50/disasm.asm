0x940C50: push    esi
0x940C51: mov     esi, ecx
0x940C53: mov     al, [esi+0Ch]
0x940C56: cmp     al, 18h
0x940C58: jnz     short loc_940C63
0x940C5A: movzx   eax, word ptr [esi+10h]
0x940C5E: shr     eax, 3
0x940C61: pop     esi
0x940C62: retn
0x940C63: cmp     al, 13h
0x940C65: jnz     short loc_940C78
0x940C67: movzx   eax, byte ptr [esi+0Dh]
0x940C6B: lea     eax, [eax+eax*2]
0x940C6E: movsx   eax, word ptr ds:0AA1ED2h[eax*4]
0x940C76: pop     esi
0x940C77: retn
0x940C78: cmp     al, 19h
0x940C7A: jnz     short loc_940CCA
0x940C7C: mov     ecx, [esi+4]
0x940C7F: push    ebx
0x940C80: push    edi
0x940C81: mov     ebx, 1
0x940C86: xor     edi, edi
0x940C88: call    sub_90D240
0x940C8D: test    eax, eax
0x940C8F: jle     short loc_940CC4
0x940C91: mov     ecx, [esi+4]
0x940C94: push    edi
0x940C95: call    sub_90D260
0x940C9A: mov     ecx, eax
0x940C9C: call    sub_940C50
0x940CA1: cmp     eax, ebx
0x940CA3: jle     short loc_940CB7
0x940CA5: mov     ecx, [esi+4]
0x940CA8: push    edi
0x940CA9: call    sub_90D260
0x940CAE: mov     ecx, eax
0x940CB0: call    sub_940C50
0x940CB5: mov     ebx, eax
0x940CB7: mov     ecx, [esi+4]
0x940CBA: inc     edi
0x940CBB: call    sub_90D240
0x940CC0: cmp     edi, eax
0x940CC2: jl      short loc_940C91
0x940CC4: pop     edi
0x940CC5: mov     eax, ebx
0x940CC7: pop     ebx
0x940CC8: pop     esi
0x940CC9: retn
0x940CCA: movzx   eax, al
0x940CCD: lea     ecx, [eax+eax*2]
0x940CD0: movsx   eax, word ptr ds:0AA1ED2h[ecx*4]
0x940CD8: pop     esi
0x940CD9: retn
