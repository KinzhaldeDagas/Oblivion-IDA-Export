0x719BA0: push    esi
0x719BA1: mov     esi, [esp+4+arg_0]
0x719BA5: push    edi
0x719BA6: push    esi
0x719BA7: mov     edi, ecx
0x719BA9: call    NiGeometry__Render
0x719BAE: mov     eax, 1
0x719BB3: cmp     [esi+200h], eax
0x719BB9: jz      short loc_719BC3
0x719BBB: cmp     [esi+204h], eax
0x719BC1: jnz     short loc_719BD8
0x719BC3: cmp     [esi+20Ch], al
0x719BC9: jnz     short loc_719BD8
0x719BCB: mov     eax, [esi]
0x719BCD: mov     edx, [eax+16Ch]
0x719BD3: push    edi
0x719BD4: mov     ecx, esi
0x719BD6: call    edx
0x719BD8: pop     edi
0x719BD9: pop     esi
0x719BDA: retn    4
