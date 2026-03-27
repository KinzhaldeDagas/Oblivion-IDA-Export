0x612640: mov     eax, [esp+arg_0]
0x612644: test    eax, eax
0x612646: jz      short loc_61265F
0x612648: cmp     eax, 1
0x61264B: jz      short loc_61265F
0x61264D: cmp     eax, 3
0x612650: jz      short loc_61265F
0x612652: cmp     eax, 2
0x612655: jz      short loc_61265F
0x612657: cmp     eax, 4
0x61265A: jz      short loc_61265F
0x61265C: xor     eax, eax
0x61265E: retn
0x61265F: mov     eax, 1
0x612664: retn
