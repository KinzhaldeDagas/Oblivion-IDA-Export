0x4706E0: mov     edx, [esp+arg_0]
0x4706E4: mov     eax, edx
0x4706E6: sub     eax, 5
0x4706E9: jz      short loc_4706FF
0x4706EB: sub     eax, 1
0x4706EE: jnz     short loc_47070B
0x4706F0: mov     eax, 3
0x4706F5: mov     eax, [ecx+eax*4+0A0h]
0x4706FC: retn    4
0x4706FF: xor     eax, eax
0x470701: mov     eax, [ecx+eax*4+0A0h]
0x470708: retn    4
0x47070B: mov     eax, [ecx+edx*4+0A0h]
0x470712: retn    4
