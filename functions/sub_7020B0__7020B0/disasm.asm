0x7020B0: cmp     dword ptr [ecx+24h], 0
0x7020B4: jz      short loc_7020C0
0x7020B6: mov     ecx, [ecx+24h]
0x7020B9: mov     eax, [ecx]
0x7020BB: mov     edx, [eax+4]
0x7020BE: jmp     edx
0x7020C0: mov     ecx, [ecx+3Ch]
0x7020C3: test    ecx, ecx
0x7020C5: jz      short loc_7020CD
0x7020C7: mov     eax, [ecx+54h]
0x7020CA: mov     eax, [eax]
0x7020CC: retn
0x7020CD: xor     eax, eax
0x7020CF: retn
