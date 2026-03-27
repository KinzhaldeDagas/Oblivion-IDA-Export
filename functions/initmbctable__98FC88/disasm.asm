0x98FC88: cmp     dword_BABC14, 0
0x98FC8F: jnz     short loc_98FCA3
0x98FC91: push    0FFFFFFFDh; int
0x98FC93: call    __setmbcp
0x98FC98: pop     ecx
0x98FC99: mov     dword_BABC14, 1
0x98FCA3: xor     eax, eax
0x98FCA5: retn
