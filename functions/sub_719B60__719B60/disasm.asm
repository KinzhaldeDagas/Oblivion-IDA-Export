0x719B60: push    esi
0x719B61: mov     esi, [esp+4+arg_0]
0x719B65: push    edi
0x719B66: push    esi
0x719B67: mov     edi, ecx
0x719B69: call    NiGeometry__Render
0x719B6E: mov     eax, 1
0x719B73: cmp     [esi+200h], eax
0x719B79: jz      short loc_719B83
0x719B7B: cmp     [esi+204h], eax
0x719B81: jnz     short loc_719B98
0x719B83: cmp     [esi+20Ch], al
0x719B89: jnz     short loc_719B98
0x719B8B: mov     eax, [esi]
0x719B8D: mov     edx, [eax+164h]
0x719B93: push    edi
0x719B94: mov     ecx, esi
0x719B96: call    edx
0x719B98: pop     edi
0x719B99: pop     esi
0x719B9A: retn    4
