0x73DC60: push    esi
0x73DC61: mov     esi, ds:0B401ACh
0x73DC67: test    esi, esi
0x73DC69: jz      short loc_73DC91
0x73DC6B: lea     eax, [esi+4]
0x73DC6E: push    eax; lpAddend
0x73DC6F: call    dword ptr ds:0A2807Ch
0x73DC75: test    eax, eax
0x73DC77: jnz     short loc_73DC87
0x73DC79: test    esi, esi
0x73DC7B: jz      short loc_73DC87
0x73DC7D: mov     edx, [esi]
0x73DC7F: mov     eax, [edx]
0x73DC81: push    1
0x73DC83: mov     ecx, esi
0x73DC85: call    eax
0x73DC87: mov     dword ptr ds:0B401ACh, 0
0x73DC91: pop     esi
0x73DC92: retn
