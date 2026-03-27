0x565CF0: mov     eax, [esp+arg_0]
0x565CF4: cmp     eax, 20h ; ' '
0x565CF7: ja      short loc_565D07
0x565CF9: mov     eax, ds:0B127F8h[eax*4]
0x565D00: test    eax, eax
0x565D02: jz      short loc_565D07
0x565D04: mov     eax, [eax]
0x565D06: retn
0x565D07: xor     eax, eax
0x565D09: retn
