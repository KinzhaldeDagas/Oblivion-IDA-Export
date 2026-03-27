0x73D8C0: push    esi
0x73D8C1: push    edi
0x73D8C2: mov     edi, [esp+8+arg_0]
0x73D8C6: push    edi
0x73D8C7: mov     esi, ecx
0x73D8C9: call    sub_70AD70
0x73D8CE: test    al, al
0x73D8D0: jnz     short loc_73D8D7
0x73D8D2: pop     edi
0x73D8D3: pop     esi
0x73D8D4: retn    4
0x73D8D7: mov     eax, [esi+0DCh]
0x73D8DD: cmp     eax, [edi+0DCh]
0x73D8E3: pop     edi
0x73D8E4: setz    al
0x73D8E7: pop     esi
0x73D8E8: retn    4
