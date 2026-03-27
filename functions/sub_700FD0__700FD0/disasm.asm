0x700FD0: push    ebp
0x700FD1: mov     ebp, ds:0A2807Ch
0x700FD7: push    esi
0x700FD8: push    edi
0x700FD9: xor     edi, edi
0x700FDB: jmp     short loc_700FE0
0x700FDD: align 10h
0x700FE0: mov     esi, ds:dword_B3F800[edi]
0x700FE6: test    esi, esi
0x700FE8: jz      short loc_70100C
0x700FEA: lea     eax, [esi+4]
0x700FED: push    eax; lpAddend
0x700FEE: call    ebp ; InterlockedDecrement
0x700FF0: test    eax, eax
0x700FF2: jnz     short loc_701002
0x700FF4: test    esi, esi
0x700FF6: jz      short loc_701002
0x700FF8: mov     edx, [esi]
0x700FFA: mov     eax, [edx]
0x700FFC: push    1
0x700FFE: mov     ecx, esi
0x701000: call    eax
0x701002: mov     ds:dword_B3F800[edi], 0
0x70100C: add     edi, 4
0x70100F: cmp     edi, 28h ; '('
0x701012: jb      short loc_700FE0
0x701014: pop     edi
0x701015: pop     esi
0x701016: pop     ebp
0x701017: retn
