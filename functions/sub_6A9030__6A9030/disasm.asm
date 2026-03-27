0x6A9030: mov     edx, [ecx+4]
0x6A9033: xor     eax, eax
0x6A9035: test    edx, edx
0x6A9037: push    esi
0x6A9038: jbe     short loc_6A904F
0x6A903A: mov     esi, [ecx+8]
0x6A903D: mov     ecx, esi
0x6A903F: nop
0x6A9040: cmp     dword ptr [ecx], 0
0x6A9043: jnz     short loc_6A9053
0x6A9045: add     eax, 1
0x6A9048: add     ecx, 4
0x6A904B: cmp     eax, edx
0x6A904D: jb      short loc_6A9040
0x6A904F: xor     eax, eax
0x6A9051: pop     esi
0x6A9052: retn
0x6A9053: mov     eax, [esi+eax*4]
0x6A9056: pop     esi
0x6A9057: retn
