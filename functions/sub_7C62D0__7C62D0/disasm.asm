0x7C62D0: push    esi
0x7C62D1: movzx   esi, [esp+4+arg_0]
0x7C62D6: cmp     esi, [ecx+0F0h]
0x7C62DC: jb      short loc_7C62E4
0x7C62DE: xor     eax, eax
0x7C62E0: pop     esi
0x7C62E1: retn    4
0x7C62E4: test    esi, esi
0x7C62E6: mov     eax, [ecx+0E8h]
0x7C62EC: mov     ecx, [eax]
0x7C62EE: lea     edx, [eax+8]
0x7C62F1: mov     eax, [edx]
0x7C62F3: jle     short loc_7C6301
0x7C62F5: sub     esi, 1
0x7C62F8: lea     eax, [ecx+8]
0x7C62FB: mov     ecx, [ecx]
0x7C62FD: mov     eax, [eax]
0x7C62FF: jnz     short loc_7C62F5
0x7C6301: pop     esi
0x7C6302: retn    4
