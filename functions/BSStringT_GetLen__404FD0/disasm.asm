0x404FD0: movzx   eax, word ptr [ecx+4]
0x404FD4: cmp     ax, 0FFFFh
0x404FD8: jnz     short loc_404FEC
0x404FDA: mov     eax, [ecx]
0x404FDC: lea     edx, [eax+1]
0x404FDF: nop
0x404FE0: mov     cl, [eax]
0x404FE2: add     eax, 1
0x404FE5: test    cl, cl
0x404FE7: jnz     short loc_404FE0
0x404FE9: sub     eax, edx
0x404FEB: retn
0x404FEC: movzx   eax, ax
0x404FEF: retn
