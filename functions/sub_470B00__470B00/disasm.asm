0x470B00: fld     dword ptr [ecx]
0x470B02: fld     dword ptr ds:0A7DEB4h
0x470B08: fchs
0x470B0A: fucompp
0x470B0C: fnstsw  ax
0x470B0E: test    ah, 44h
0x470B11: jnp     short loc_470B19
0x470B13: mov     eax, 1
0x470B18: retn
0x470B19: xor     eax, eax
0x470B1B: retn
