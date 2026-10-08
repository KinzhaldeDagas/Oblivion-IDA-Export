0x470A40: movzx   eax, [esp+arg_0]; Encoded animation-key map hash: UInt16 key modulo bucket count.
0x470A45: xor     edx, edx
0x470A47: div     dword ptr [ecx+4]
0x470A4A: mov     eax, edx
0x470A4C: retn    4
