0x543BB0: push    esi
0x543BB1: mov     esi, ecx
0x543BB3: mov     eax, [esi+0DCh]
0x543BB9: test    eax, eax
0x543BBB: push    edi
0x543BBC: mov     edi, [esp+8+arg_0]
0x543BC0: jz      short loc_543BCC
0x543BC2: cmp     eax, 1
0x543BC5: jz      short loc_543BCC
0x543BC7: cmp     eax, 4
0x543BCA: jnz     short loc_543BD6
0x543BCC: cmp     edi, 3
0x543BCF: jz      short loc_543BF9
0x543BD1: cmp     edi, 2
0x543BD4: jz      short loc_543BF9
0x543BD6: cmp     eax, 3
0x543BD9: jz      short loc_543BE0
0x543BDB: cmp     eax, 2
0x543BDE: jnz     short loc_543BFE
0x543BE0: test    edi, edi
0x543BE2: jz      short loc_543BE9
0x543BE4: cmp     edi, 1
0x543BE7: jnz     short loc_543BFE
0x543BE9: call    sub_542B50
0x543BEE: mov     [esi+0DCh], edi
0x543BF4: pop     edi
0x543BF5: pop     esi
0x543BF6: retn    4
0x543BF9: call    sub_543510
0x543BFE: mov     [esi+0DCh], edi
0x543C04: pop     edi
0x543C05: pop     esi
0x543C06: retn    4
