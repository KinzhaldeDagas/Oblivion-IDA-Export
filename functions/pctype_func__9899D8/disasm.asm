0x9899D8: call    __getptd
0x9899DD: mov     ecx, eax
0x9899DF: mov     eax, [ecx+6Ch]
0x9899E2: cmp     eax, off_B31998
0x9899E8: jz      short loc_9899FA
0x9899EA: mov     edx, dword_B318B0
0x9899F0: test    [ecx+70h], edx
0x9899F3: jnz     short loc_9899FA
0x9899F5: call    ___updatetlocinfo
0x9899FA: mov     eax, [eax+0C8h]
0x989A00: retn
