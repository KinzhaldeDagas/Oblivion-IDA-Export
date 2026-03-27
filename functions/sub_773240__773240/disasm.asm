0x773240: push    ebx
0x773241: lea     eax, [ecx+5Ch]
0x773244: mov     edx, 8
0x773249: xor     ebx, ebx
0x77324B: jmp     short loc_773250
0x77324D: align 10h
0x773250: mov     [eax-30h], bl
0x773253: mov     [eax], bl
0x773255: add     eax, 1
0x773258: sub     edx, 1
0x77325B: jnz     short loc_773250
0x77325D: mov     [ecx+34h], ebx
0x773260: mov     [ecx+4], ebx
0x773263: pop     ebx
0x773264: retn
