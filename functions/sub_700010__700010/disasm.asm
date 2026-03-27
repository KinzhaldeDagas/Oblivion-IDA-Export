0x700010: push    esi
0x700011: mov     esi, [ecx+0Ch]
0x700014: test    esi, esi
0x700016: push    edi
0x700017: jz      short loc_700042
0x700019: mov     edi, [esp+8+arg_0]
0x70001D: lea     ecx, [ecx+0]
0x700020: mov     eax, [esi]
0x700022: mov     edx, [eax+4]
0x700025: mov     ecx, esi
0x700027: call    edx
0x700029: test    eax, eax
0x70002B: jz      short loc_70003B
0x70002D: lea     ecx, [ecx+0]
0x700030: cmp     eax, edi
0x700032: jz      short loc_700049
0x700034: mov     eax, [eax+4]
0x700037: test    eax, eax
0x700039: jnz     short loc_700030
0x70003B: mov     esi, [esi+34h]
0x70003E: test    esi, esi
0x700040: jnz     short loc_700020
0x700042: pop     edi
0x700043: xor     eax, eax
0x700045: pop     esi
0x700046: retn    4
0x700049: pop     edi
0x70004A: mov     eax, esi
0x70004C: pop     esi
0x70004D: retn    4
