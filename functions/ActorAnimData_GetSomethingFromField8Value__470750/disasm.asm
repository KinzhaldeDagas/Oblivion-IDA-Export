0x470750: mov     edx, [esp+arg_0]
0x470754: mov     eax, edx
0x470756: sub     eax, 5
0x470759: jz      short loc_47076C
0x47075B: sub     eax, 1
0x47075E: jnz     short loc_470775
0x470760: mov     eax, 3
0x470765: mov     eax, [ecx+eax*4+48h]
0x470769: retn    4
0x47076C: xor     eax, eax
0x47076E: mov     eax, [ecx+eax*4+48h]
0x470772: retn    4
0x470775: mov     eax, [ecx+edx*4+48h]
0x470779: retn    4
