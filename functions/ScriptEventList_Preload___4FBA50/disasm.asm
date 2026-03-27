0x4FBA50: push    esi
0x4FBA51: push    edi
0x4FBA52: mov     esi, ecx
0x4FBA54: call    sub_4FA080
0x4FBA59: mov     eax, [esi+8]
0x4FBA5C: xor     edi, edi
0x4FBA5E: cmp     eax, edi
0x4FBA60: jz      short loc_4FBA72
0x4FBA62: mov     ecx, [eax]
0x4FBA64: cmp     ecx, edi
0x4FBA66: jz      short loc_4FBA72
0x4FBA68: mov     eax, [eax+4]
0x4FBA6B: cmp     eax, edi
0x4FBA6D: mov     [ecx+4], edi
0x4FBA70: jnz     short loc_4FBA62
0x4FBA72: mov     ecx, [esi]
0x4FBA74: cmp     ecx, edi
0x4FBA76: jz      short loc_4FBA80
0x4FBA78: call    sub_4FA910
0x4FBA7D: mov     [esi+0Ch], eax
0x4FBA80: mov     eax, [esi+10h]
0x4FBA83: cmp     eax, edi
0x4FBA85: jz      short loc_4FBA90
0x4FBA87: push    eax
0x4FBA88: call    FormHeapFree
0x4FBA8D: add     esp, 4
0x4FBA90: mov     [esi+10h], edi
0x4FBA93: pop     edi
0x4FBA94: pop     esi
0x4FBA95: retn
