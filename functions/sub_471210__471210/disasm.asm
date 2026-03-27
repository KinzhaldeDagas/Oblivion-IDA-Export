0x471210: mov     eax, [ecx+0CCh]
0x471216: test    eax, eax
0x471218: jnz     short loc_47121D
0x47121A: xor     al, al
0x47121C: retn
0x47121D: xor     ecx, ecx
0x47121F: cmp     dword ptr [eax], 2
0x471222: setz    cl
0x471225: mov     al, cl
0x471227: retn
