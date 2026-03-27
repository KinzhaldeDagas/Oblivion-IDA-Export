0x7020D0: cmp     dword ptr [ecx+24h], 0
0x7020D4: jz      short loc_7020E0
0x7020D6: mov     ecx, [ecx+24h]
0x7020D9: mov     eax, [ecx]
0x7020DB: mov     edx, [eax+8]
0x7020DE: jmp     edx
0x7020E0: mov     ecx, [ecx+3Ch]
0x7020E3: test    ecx, ecx
0x7020E5: jz      short loc_7020ED
0x7020E7: mov     eax, [ecx+58h]
0x7020EA: mov     eax, [eax]
0x7020EC: retn
0x7020ED: xor     eax, eax
0x7020EF: retn
