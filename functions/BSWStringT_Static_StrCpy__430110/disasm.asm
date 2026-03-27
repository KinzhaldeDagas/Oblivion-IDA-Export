0x430110: mov     eax, [esp+arg_0]
0x430114: mov     ecx, [esp+arg_4]
0x430118: push    esi
0x430119: mov     esi, eax
0x43011B: sub     esi, ecx
0x43011D: lea     ecx, [ecx+0]
0x430120: movzx   edx, word ptr [ecx]
0x430123: mov     [esi+ecx], dx
0x430127: add     ecx, 2
0x43012A: test    dx, dx
0x43012D: jnz     short loc_430120
0x43012F: pop     esi
0x430130: retn
