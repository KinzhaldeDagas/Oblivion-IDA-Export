0x8B0470: test    ecx, ecx
0x8B0472: jz      short loc_8B0480
0x8B0474: mov     eax, [ecx+8]
0x8B0477: test    eax, eax
0x8B0479: jz      short loc_8B0480
0x8B047B: mov     eax, [eax+0Ch]
0x8B047E: jmp     short loc_8B0482
0x8B0480: xor     eax, eax
0x8B0482: test    eax, eax
0x8B0484: jz      short locret_8B0499
0x8B0486: mov     eax, [eax+8]
0x8B0489: test    eax, eax
0x8B048B: jz      short locret_8B0499
0x8B048D: mov     edx, [eax]
0x8B048F: mov     edx, [edx+90h]
0x8B0495: mov     ecx, eax
0x8B0497: jmp     edx
0x8B0499: retn    4
