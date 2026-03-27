0x57CF60: xor     eax, eax
0x57CF62: lea     edx, [ecx+0E0h]
0x57CF68: cmp     dword ptr [edx], 0
0x57CF6B: jz      short loc_57CF7F
0x57CF6D: add     eax, 1
0x57CF70: add     edx, 4
0x57CF73: cmp     eax, 0Ah
0x57CF76: jl      short loc_57CF68
0x57CF78: mov     eax, [ecx+104h]
0x57CF7E: retn
0x57CF7F: cmp     eax, 0Ah
0x57CF82: jl      short loc_57CF8B
0x57CF84: mov     eax, [ecx+104h]
0x57CF8A: retn
0x57CF8B: test    eax, eax
0x57CF8D: jnz     short loc_57CF90
0x57CF8F: retn
0x57CF90: mov     eax, [ecx+eax*4+0DCh]
0x57CF97: retn
