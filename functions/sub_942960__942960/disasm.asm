0x942960: mov     edx, [ecx+8]
0x942963: xor     eax, eax
0x942965: test    edx, edx
0x942967: jl      short locret_94297D
0x942969: mov     ecx, [ecx]
0x94296B: jmp     short loc_942970
0x94296D: align 10h
0x942970: cmp     dword ptr [ecx], 0FFFFFFFFh
0x942973: jnz     short locret_94297D
0x942975: inc     eax
0x942976: add     ecx, 4
0x942979: cmp     eax, edx
0x94297B: jle     short loc_942970
0x94297D: retn
