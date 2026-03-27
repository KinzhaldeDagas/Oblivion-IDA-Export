0x6CCB00: push    esi
0x6CCB01: mov     esi, ecx
0x6CCB03: cmp     byte ptr [esi+0Eh], 1
0x6CCB07: jnz     short loc_6CCB14
0x6CCB09: mov     ecx, [esi+18h]
0x6CCB0C: mov     eax, [ecx]
0x6CCB0E: mov     edx, [eax+7Ch]
0x6CCB11: pop     esi
0x6CCB12: jmp     edx
0x6CCB14: push    ebx
0x6CCB15: xor     bl, bl
0x6CCB17: cmp     [esi+0Dh], bl
0x6CCB1A: jbe     short loc_6CCB41
0x6CCB1C: lea     esp, [esp+0]
0x6CCB20: mov     ecx, [esi+14h]
0x6CCB23: movzx   eax, bl
0x6CCB26: lea     eax, [eax+eax*2]
0x6CCB29: lea     eax, [ecx+eax*8]
0x6CCB2C: mov     ecx, [eax]
0x6CCB2E: test    ecx, ecx
0x6CCB30: jz      short loc_6CCB39
0x6CCB32: mov     edx, [ecx]
0x6CCB34: mov     eax, [edx+7Ch]
0x6CCB37: call    eax
0x6CCB39: add     bl, 1
0x6CCB3C: cmp     bl, [esi+0Dh]
0x6CCB3F: jb      short loc_6CCB20
0x6CCB41: pop     ebx
0x6CCB42: pop     esi
0x6CCB43: retn
