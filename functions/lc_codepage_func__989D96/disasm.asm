0x989D96: call    __getptd
0x989D9B: mov     ecx, eax
0x989D9D: mov     eax, [ecx+6Ch]
0x989DA0: cmp     eax, off_B31998
0x989DA6: jz      short loc_989DB8
0x989DA8: mov     edx, dword_B318B0
0x989DAE: test    [ecx+70h], edx
0x989DB1: jnz     short loc_989DB8
0x989DB3: call    ___updatetlocinfo
0x989DB8: mov     eax, [eax+4]
0x989DBB: retn
