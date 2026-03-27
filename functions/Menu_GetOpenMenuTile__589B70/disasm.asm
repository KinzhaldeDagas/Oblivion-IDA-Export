0x589B70: mov     eax, [esp+arg_0]
0x589B74: lea     ecx, [eax-3E9h]
0x589B7A: cmp     ecx, 32h ; '2'
0x589B7D: ja      short Menu_GetOpenMenuTile___Return_0
0x589B7F: movzx   ecx, word ptr ds:0B1397Ah
0x589B86: lea     edx, [eax-3E9h]
0x589B8C: cmp     ecx, edx
0x589B8E: jbe     short Menu_GetOpenMenuTile___Return_0
0x589B90: mov     edx, ds:0B13974h
0x589B96: mov     eax, [edx+eax*4-0FA4h]
0x589B9D: retn
