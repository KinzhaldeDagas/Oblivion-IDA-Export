0x8B8350: mov     ecx, [ecx+30h]
0x8B8353: test    ecx, ecx
0x8B8355: jz      short loc_8B8370
0x8B8357: mov     eax, [ecx]
0x8B8359: mov     edx, [eax+4]
0x8B835C: call    edx
0x8B835E: test    eax, eax
0x8B8360: jz      short loc_8B8370
0x8B8362: cmp     eax, offset dword_B3FA80
0x8B8367: jz      short loc_8B8373
0x8B8369: mov     eax, [eax+4]
0x8B836C: test    eax, eax
0x8B836E: jnz     short loc_8B8362
0x8B8370: xor     al, al
0x8B8372: retn
0x8B8373: mov     al, 1
0x8B8375: retn
