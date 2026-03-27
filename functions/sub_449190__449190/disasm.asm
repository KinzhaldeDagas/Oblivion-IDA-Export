0x449190: movzx   eax, word ptr [ecx+8]
0x449194: cmp     ax, 0FFFFh
0x449198: jnz     short loc_4491AC
0x44919A: mov     eax, [ecx+4]
0x44919D: lea     edx, [eax+1]
0x4491A0: mov     cl, [eax]
0x4491A2: add     eax, 1
0x4491A5: test    cl, cl
0x4491A7: jnz     short loc_4491A0
0x4491A9: sub     eax, edx
0x4491AB: retn
0x4491AC: movzx   eax, ax
0x4491AF: retn
