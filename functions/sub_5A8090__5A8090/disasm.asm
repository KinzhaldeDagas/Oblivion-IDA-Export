0x5A8090: mov     eax, [esp+arg_0]
0x5A8094: cmp     eax, 1
0x5A8097: jnz     short loc_5A80A5
0x5A8099: mov     eax, [esp+arg_4]
0x5A809D: mov     ds:0B3B350h, eax
0x5A80A2: retn    8
0x5A80A5: cmp     eax, 3
0x5A80A8: jnz     short loc_5A80B7
0x5A80AA: mov     ecx, [esp+arg_4]
0x5A80AE: mov     ds:0B3B358h, ecx
0x5A80B4: retn    8
0x5A80B7: cmp     eax, 2
0x5A80BA: jnz     short locret_5A80C6
0x5A80BC: mov     edx, [esp+arg_4]
0x5A80C0: mov     ds:0B3B354h, edx
0x5A80C6: retn    8
