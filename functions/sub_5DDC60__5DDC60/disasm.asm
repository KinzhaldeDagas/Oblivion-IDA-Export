0x5DDC60: mov     eax, [esp+arg_0]
0x5DDC64: lea     edx, [eax-1]
0x5DDC67: cmp     edx, 2Fh ; '/'
0x5DDC6A: ja      short locret_5DDC95
0x5DDC6C: add     eax, 0FFFFFFFFh
0x5DDC6F: cmp     eax, 17h
0x5DDC72: jz      short loc_5DDC8B
0x5DDC74: cmp     eax, 18h
0x5DDC77: jz      short loc_5DDC8B
0x5DDC79: cmp     eax, 6
0x5DDC7C: jnz     short locret_5DDC95
0x5DDC7E: mov     dword ptr [ecx+0E8h], 0
0x5DDC88: retn    8
0x5DDC8B: mov     eax, [ecx+eax*4+28h]
0x5DDC8F: mov     [ecx+0E8h], eax
0x5DDC95: retn    8
