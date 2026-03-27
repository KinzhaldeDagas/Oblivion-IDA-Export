0x4295F0: mov     edx, ecx
0x4295F2: mov     ecx, [esp+arg_0]
0x4295F6: cmp     ecx, 1Eh
0x4295F9: jnb     short locret_429614
0x4295FB: mov     eax, 1
0x429600: shl     eax, cl
0x429602: cmp     [esp+arg_4], 0
0x429607: jz      short loc_42960F
0x429609: or      [edx+0Ch], eax
0x42960C: retn    8
0x42960F: not     eax
0x429611: and     [edx+0Ch], eax
0x429614: retn    8
