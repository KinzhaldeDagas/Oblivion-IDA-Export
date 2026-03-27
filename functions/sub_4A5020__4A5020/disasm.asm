0x4A5020: mov     eax, [ecx+8]
0x4A5023: test    eax, eax
0x4A5025: jl      short loc_4A502F
0x4A5027: cmp     eax, 3
0x4A502A: jge     short loc_4A502F
0x4A502C: mov     al, 1
0x4A502E: retn
0x4A502F: xor     al, al
0x4A5031: retn
