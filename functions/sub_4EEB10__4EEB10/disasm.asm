0x4EEB10: mov     eax, [esp+arg_0]
0x4EEB14: mov     ecx, [esp+arg_4]
0x4EEB18: mov     eax, [eax+4]
0x4EEB1B: mov     ecx, [ecx+4]
0x4EEB1E: cmp     eax, ecx
0x4EEB20: jbe     short loc_4EEB26
0x4EEB22: or      eax, 0FFFFFFFFh
0x4EEB25: retn
0x4EEB26: sbb     eax, eax
0x4EEB28: neg     eax
0x4EEB2A: retn
