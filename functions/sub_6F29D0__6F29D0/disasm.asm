0x6F29D0: push    ebx
0x6F29D1: push    ebp
0x6F29D2: push    esi
0x6F29D3: mov     esi, ecx
0x6F29D5: mov     ecx, [esi+4]
0x6F29D8: test    ecx, ecx
0x6F29DA: push    edi
0x6F29DB: jnz     short loc_6F29E1
0x6F29DD: xor     eax, eax
0x6F29DF: jmp     short loc_6F29F6
0x6F29E1: mov     edx, [esi+8]
0x6F29E4: sub     edx, ecx
0x6F29E6: mov     eax, 2AAAAAABh
0x6F29EB: imul    edx
0x6F29ED: sar     edx, 1
0x6F29EF: mov     eax, edx
0x6F29F1: shr     eax, 1Fh
0x6F29F4: add     eax, edx
0x6F29F6: mov     ebx, [esp+10h+arg_0]
0x6F29FA: cmp     eax, ebx
0x6F29FC: jnb     short loc_6F2A3F
0x6F29FE: test    ecx, ecx
0x6F2A00: jnz     short loc_6F2A06
0x6F2A02: xor     edi, edi
0x6F2A04: jmp     short loc_6F2A1B
0x6F2A06: mov     edx, [esi+8]
0x6F2A09: sub     edx, ecx
0x6F2A0B: mov     eax, 2AAAAAABh
0x6F2A10: imul    edx
0x6F2A12: sar     edx, 1
0x6F2A14: mov     edi, edx
0x6F2A16: shr     edi, 1Fh
0x6F2A19: add     edi, edx
0x6F2A1B: mov     ebp, [esi+8]
0x6F2A1E: cmp     ecx, ebp
0x6F2A20: jbe     short loc_6F2A27
0x6F2A22: call    __invalid_parameter_noinfo
0x6F2A27: lea     eax, [esp+10h+arg_4]
0x6F2A2B: push    eax
0x6F2A2C: sub     ebx, edi
0x6F2A2E: push    ebx
0x6F2A2F: push    ebp
0x6F2A30: push    esi
0x6F2A31: mov     ecx, esi
0x6F2A33: call    sub_6F1940
0x6F2A38: pop     edi
0x6F2A39: pop     esi
0x6F2A3A: pop     ebp
0x6F2A3B: pop     ebx
0x6F2A3C: retn    10h
0x6F2A3F: test    ecx, ecx
0x6F2A41: jz      short loc_6F2A9E
0x6F2A43: mov     edi, [esi+8]
0x6F2A46: mov     edx, edi
0x6F2A48: sub     edx, ecx
0x6F2A4A: mov     eax, 2AAAAAABh
0x6F2A4F: imul    edx
0x6F2A51: sar     edx, 1
0x6F2A53: mov     eax, edx
0x6F2A55: shr     eax, 1Fh
0x6F2A58: add     eax, edx
0x6F2A5A: cmp     ebx, eax
0x6F2A5C: jnb     short loc_6F2A9E
0x6F2A5E: cmp     ecx, edi
0x6F2A60: jbe     short loc_6F2A67
0x6F2A62: call    __invalid_parameter_noinfo
0x6F2A67: mov     ebp, [esi+4]
0x6F2A6A: cmp     ebp, [esi+8]
0x6F2A6D: jbe     short loc_6F2A74
0x6F2A6F: call    __invalid_parameter_noinfo
0x6F2A74: lea     ecx, [ebx+ebx*2]
0x6F2A77: lea     ebx, [ebp+ecx*4+0]
0x6F2A7B: cmp     ebx, [esi+8]
0x6F2A7E: mov     [esp+10h+arg_8], ebp
0x6F2A82: ja      short loc_6F2A89
0x6F2A84: cmp     ebx, [esi+4]
0x6F2A87: jnb     short loc_6F2A8E
0x6F2A89: call    __invalid_parameter_noinfo
0x6F2A8E: push    edi
0x6F2A8F: push    esi
0x6F2A90: push    ebx
0x6F2A91: push    esi
0x6F2A92: lea     edx, [esp+20h+arg_4]
0x6F2A96: push    edx
0x6F2A97: mov     ecx, esi
0x6F2A99: call    sub_6F1470
0x6F2A9E: pop     edi
0x6F2A9F: pop     esi
0x6F2AA0: pop     ebp
0x6F2AA1: pop     ebx
0x6F2AA2: retn    10h
