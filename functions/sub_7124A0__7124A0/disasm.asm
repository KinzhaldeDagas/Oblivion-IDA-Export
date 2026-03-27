0x7124A0: mov     eax, [ecx+230h]
0x7124A6: lea     edx, [eax+1]
0x7124A9: mov     [ecx+230h], edx
0x7124AF: mov     edx, [ecx+224h]
0x7124B5: mov     eax, [edx+eax*4]
0x7124B8: cmp     eax, 0FFFFFFFFh
0x7124BB: jnz     short loc_7124C0
0x7124BD: xor     eax, eax
0x7124BF: retn
0x7124C0: mov     ecx, [ecx+1F0h]
0x7124C6: mov     eax, [ecx+eax*4]
0x7124C9: retn
