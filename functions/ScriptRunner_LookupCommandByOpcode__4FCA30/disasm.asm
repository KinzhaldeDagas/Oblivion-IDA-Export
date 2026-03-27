0x4FCA30: mov     ecx, [esp+a1]
0x4FCA34: lea     edx, [ecx-100h]
0x4FCA3A: xor     eax, eax
0x4FCA3C: cmp     edx, 82h ; '‚'
0x4FCA42: ja      short loc_4FCA53
0x4FCA44: lea     eax, [ecx+ecx*4-500h]
0x4FCA4B: lea     eax, ds:0B0B420h[eax*8]
0x4FCA52: retn
0x4FCA53: lea     edx, [ecx-1000h]
0x4FCA59: cmp     edx, 170h
0x4FCA5F: ja      short locret_4FCA6F
0x4FCA61: lea     eax, [ecx+ecx*4-5000h]
0x4FCA68: lea     eax, ds:0B0C8C0h[eax*8]
0x4FCA6F: retn
