0x44FFF0: push    esi
0x44FFF1: mov     esi, ecx
0x44FFF3: mov     ecx, [esp+4+arg_0]
0x44FFF7: test    ecx, ecx
0x44FFF9: mov     [esi+10h], ecx
0x44FFFC: jz      short loc_45001F
0x44FFFE: mov     eax, [ecx+30h]
0x450001: cmp     eax, 0FFFFFFFFh
0x450004: jnz     short loc_45000C
0x450006: mov     eax, [ecx+148h]
0x45000C: mov     [esi+25Ch], eax
0x450012: mov     eax, [ecx]
0x450014: mov     edx, [eax+1Ch]
0x450017: call    edx
0x450019: mov     [esi+258h], eax
0x45001F: pop     esi
0x450020: retn    4
