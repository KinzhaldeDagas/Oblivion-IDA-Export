0x470720: mov     edx, [esp+arg_0]
0x470724: mov     eax, edx
0x470726: sub     eax, 5
0x470729: jz      short loc_47073D
0x47072B: sub     eax, 1
0x47072E: jnz     short loc_470747
0x470730: mov     eax, 3
0x470735: mov     ax, [ecx+eax*2+3Ch]
0x47073A: retn    4
0x47073D: xor     eax, eax
0x47073F: mov     ax, [ecx+eax*2+3Ch]
0x470744: retn    4
0x470747: mov     ax, [ecx+edx*2+3Ch]
0x47074C: retn    4
