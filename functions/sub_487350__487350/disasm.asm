0x487350: mov     eax, [ecx]
0x487352: test    eax, eax
0x487354: mov     dl, 1
0x487356: jz      short locret_487390
0x487358: push    esi
0x487359: mov     esi, [esp+4+arg_0]
0x48735D: lea     ecx, [ecx+0]
0x487360: test    dl, dl
0x487362: jz      short loc_48737E
0x487364: mov     ecx, [eax]
0x487366: test    ecx, ecx
0x487368: jz      short loc_487373
0x48736A: cmp     [ecx+8], esi
0x48736D: jnz     short loc_487373
0x48736F: xor     dl, dl
0x487371: jmp     short loc_487376
0x487373: mov     eax, [eax+4]
0x487376: test    eax, eax
0x487378: jnz     short loc_487360
0x48737A: pop     esi
0x48737B: retn    8
0x48737E: test    eax, eax
0x487380: jz      short loc_48738F
0x487382: mov     eax, [eax]
0x487384: test    eax, eax
0x487386: jz      short loc_48738F
0x487388: mov     ecx, [esp+4+arg_4]
0x48738C: add     [eax+4], ecx
0x48738F: pop     esi
0x487390: retn    8
