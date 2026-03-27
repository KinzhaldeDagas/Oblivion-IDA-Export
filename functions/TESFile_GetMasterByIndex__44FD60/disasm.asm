0x44FD60: mov     eax, ecx
0x44FD62: mov     ecx, [esp+arg_0]
0x44FD66: cmp     ecx, [eax+3F0h]
0x44FD6C: ja      short loc_44FD83
0x44FD6E: test    ecx, ecx
0x44FD70: jz      short locret_44FD85
0x44FD72: mov     eax, [eax+3F4h]
0x44FD78: test    eax, eax
0x44FD7A: jz      short loc_44FD83
0x44FD7C: mov     eax, [eax+ecx*4-4]
0x44FD80: retn    4
0x44FD83: xor     eax, eax
0x44FD85: retn    4
