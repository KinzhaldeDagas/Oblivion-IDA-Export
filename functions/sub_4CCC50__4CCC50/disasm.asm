0x4CCC50: push    ebx
0x4CCC51: mov     ebx, ecx
0x4CCC53: push    ebx; a2
0x4CCC54: mov     ecx, offset stru_B35C80; this
0x4CCC59: call    sub_496EA0
0x4CCC5E: cmp     byte ptr [ebx+26h], 6
0x4CCC62: jnz     short loc_4CCCB0
0x4CCC64: push    edi
0x4CCC65: lea     edi, [ebx+48h]
0x4CCC68: test    edi, edi
0x4CCC6A: jz      short loc_4CCCAF
0x4CCC6C: push    esi
0x4CCC6D: lea     ecx, [ecx+0]
0x4CCC70: mov     esi, [edi]
0x4CCC72: test    esi, esi
0x4CCC74: mov     edi, [edi+4]
0x4CCC77: jz      short loc_4CCCAA
0x4CCC79: mov     eax, [esi]
0x4CCC7B: mov     edx, [eax+190h]
0x4CCC81: mov     ecx, esi
0x4CCC83: call    edx
0x4CCC85: test    al, al
0x4CCC87: jz      short loc_4CCC9E
0x4CCC89: cmp     byte ptr [esi+78h], 0
0x4CCC8D: jnz     short loc_4CCC9E
0x4CCC8F: mov     ecx, ds:0B33B00h
0x4CCC95: call    sub_45A500
0x4CCC9A: test    al, al
0x4CCC9C: jz      short loc_4CCCAA
0x4CCC9E: mov     eax, [esi]
0x4CCCA0: mov     edx, [eax+160h]
0x4CCCA6: mov     ecx, esi
0x4CCCA8: call    edx
0x4CCCAA: test    edi, edi
0x4CCCAC: jnz     short loc_4CCC70
0x4CCCAE: pop     esi
0x4CCCAF: pop     edi
0x4CCCB0: push    ebx; a2
0x4CCCB1: mov     ecx, offset stru_B35C80; this
0x4CCCB6: call    sub_496F50
0x4CCCBB: pop     ebx
0x4CCCBC: retn
