0x6C3D80: mov     ecx, [esp+arg_0]
0x6C3D84: test    ecx, ecx
0x6C3D86: jz      short loc_6C3DA1
0x6C3D88: mov     eax, [ecx]
0x6C3D8A: mov     edx, [eax+4]
0x6C3D8D: call    edx
0x6C3D8F: test    eax, eax
0x6C3D91: jz      short loc_6C3DA1
0x6C3D93: cmp     eax, offset dword_B3FA80
0x6C3D98: jz      short loc_6C3DA6
0x6C3D9A: mov     eax, [eax+4]
0x6C3D9D: test    eax, eax
0x6C3D9F: jnz     short loc_6C3D93
0x6C3DA1: xor     al, al
0x6C3DA3: retn    4
0x6C3DA6: mov     al, 1
0x6C3DA8: retn    4
