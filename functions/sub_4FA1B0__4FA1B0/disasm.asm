0x4FA1B0: mov     eax, [ecx]
0x4FA1B2: test    eax, eax
0x4FA1B4: jz      short loc_4FA1D2
0x4FA1B6: add     eax, 40h ; '@'
0x4FA1B9: jz      short loc_4FA1D2
0x4FA1BB: mov     edx, [esp+arg_0]
0x4FA1BF: nop
0x4FA1C0: mov     ecx, [eax]
0x4FA1C2: test    ecx, ecx
0x4FA1C4: jz      short loc_4FA1D2
0x4FA1C6: cmp     [ecx+0Ch], edx
0x4FA1C9: jz      short loc_4FA1D7
0x4FA1CB: mov     eax, [eax+4]
0x4FA1CE: test    eax, eax
0x4FA1D0: jnz     short loc_4FA1C0
0x4FA1D2: xor     al, al
0x4FA1D4: retn    4
0x4FA1D7: mov     al, 1
0x4FA1D9: retn    4
