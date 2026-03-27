0x4FA560: mov     edx, [esp+arg_0]
0x4FA564: xor     al, al
0x4FA566: test    edx, edx
0x4FA568: jz      short locret_4FA57E
0x4FA56A: mov     ecx, offset dword_B361CC
0x4FA56F: nop
0x4FA570: cmp     [ecx], edx
0x4FA572: jz      short loc_4FA57C
0x4FA574: mov     ecx, [ecx+4]
0x4FA577: test    ecx, ecx
0x4FA579: jnz     short loc_4FA570
0x4FA57B: retn
0x4FA57C: mov     al, 1
0x4FA57E: retn
