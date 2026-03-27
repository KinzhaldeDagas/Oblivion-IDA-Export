0x8A7220: mov     eax, [esp+arg_0]
0x8A7224: mov     edx, eax
0x8A7226: and     edx, 0Fh
0x8A7229: mov     dword ptr [ecx+28h], 0FFFFFFFFh
0x8A7230: jz      short loc_8A7248
0x8A7232: sub     eax, edx
0x8A7234: add     eax, 10h
0x8A7237: mov     [ecx+20h], eax
0x8A723A: sub     eax, edx
0x8A723C: mov     edx, [esp+arg_4]
0x8A7240: add     eax, edx
0x8A7242: mov     [ecx+2Ch], eax
0x8A7245: retn    8
0x8A7248: mov     edx, [esp+arg_4]
0x8A724C: mov     [ecx+20h], eax
0x8A724F: add     eax, edx
0x8A7251: mov     [ecx+2Ch], eax
0x8A7254: retn    8
