0x7D72D0: push    esi
0x7D72D1: mov     esi, ds:0B3F928h
0x7D72D7: call    sub_7D7150
0x7D72DC: cmp     dword ptr [esi+204h], 1
0x7D72E3: jnz     short loc_7D7308
0x7D72E5: cmp     dword ptr [esi+200h], 0
0x7D72EC: jnz     short loc_7D7308
0x7D72EE: mov     eax, [esi]
0x7D72F0: mov     edx, [eax+134h]
0x7D72F6: mov     ecx, esi
0x7D72F8: call    edx
0x7D72FA: test    al, al
0x7D72FC: jz      short loc_7D7308
0x7D72FE: mov     dword ptr [esi+204h], 0
0x7D7308: pop     esi
0x7D7309: retn
