0x89E060: push    esi
0x89E061: push    edi
0x89E062: mov     edi, [esp+8+arg_0]
0x89E066: push    edi
0x89E067: mov     esi, ecx
0x89E069: call    sub_89D8E0
0x89E06E: test    esi, esi
0x89E070: jz      short loc_89E084
0x89E072: mov     esi, [esi+8]
0x89E075: test    esi, esi
0x89E077: jz      short loc_89E084
0x89E079: mov     esi, [esi+18h]
0x89E07C: mov     [edi+4], esi
0x89E07F: pop     edi
0x89E080: pop     esi
0x89E081: retn    4
0x89E084: xor     eax, eax
0x89E086: mov     [edi+4], eax
0x89E089: pop     edi
0x89E08A: pop     esi
0x89E08B: retn    4
