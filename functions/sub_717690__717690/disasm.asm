0x717690: push    esi
0x717691: mov     esi, [esp+4+arg_0]
0x717695: push    edi
0x717696: push    esi
0x717697: mov     edi, ecx
0x717699: call    NiGeometry__Render
0x71769E: mov     eax, 1
0x7176A3: cmp     [esi+200h], eax
0x7176A9: jz      short loc_7176B3
0x7176AB: cmp     [esi+204h], eax
0x7176B1: jnz     short loc_7176C8
0x7176B3: cmp     [esi+20Ch], al
0x7176B9: jnz     short loc_7176C8
0x7176BB: mov     eax, [esi]
0x7176BD: mov     edx, [eax+160h]
0x7176C3: push    edi
0x7176C4: mov     ecx, esi
0x7176C6: call    edx
0x7176C8: pop     edi
0x7176C9: pop     esi
0x7176CA: retn    4
