0x470440: test    byte ptr [esp+Dst], 8
0x470445: jz      short locret_470461
0x470447: add     ecx, 4
0x47044A: mov     [esp+Dst], ecx; Dst
0x47044E: mov     ecx, ds:0B33B00h
0x470454: mov     [esp+Size], 4; Size
0x47045C: jmp     SaveLoad_LoadData
0x470461: retn    8
