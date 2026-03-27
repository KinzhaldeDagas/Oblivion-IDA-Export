0x7F2AB0: fld     [esp+arg_0]
0x7F2AB4: push    ebx
0x7F2AB5: mov     bl, [ecx+180h]
0x7F2ABB: push    esi
0x7F2ABC: mov     esi, [ecx+84h]
0x7F2AC2: push    edi
0x7F2AC3: test    bl, bl
0x7F2AC5: jz      short loc_7F2ACF
0x7F2AC7: cmp     esi, [ecx+14Ch]
0x7F2ACD: jl      short loc_7F2AD7
0x7F2ACF: cmp     esi, [ecx+88h]
0x7F2AD5: jg      short loc_7F2B1C
0x7F2AD7: xor     edx, edx
0x7F2AD9: cmp     [ecx+134h], edx
0x7F2ADF: jle     short loc_7F2B07
0x7F2AE1: mov     eax, [ecx+14Ch]
0x7F2AE7: fld     st
0x7F2AE9: mov     edi, [ecx+6Ch]
0x7F2AEC: imul    eax, edx
0x7F2AEF: add     eax, esi
0x7F2AF1: shl     eax, 4
0x7F2AF4: lea     eax, [eax+edi+4]
0x7F2AF8: add     edx, 1
0x7F2AFB: fadd    dword ptr [eax]
0x7F2AFD: fstp    dword ptr [eax]
0x7F2AFF: cmp     edx, [ecx+134h]
0x7F2B05: jl      short loc_7F2AE1
0x7F2B07: add     esi, 1
0x7F2B0A: cmp     esi, [ecx+14Ch]
0x7F2B10: jl      short loc_7F2AC3
0x7F2B12: test    bl, bl
0x7F2B14: jz      short loc_7F2ACF
0x7F2B16: xor     esi, esi
0x7F2B18: xor     bl, bl
0x7F2B1A: jmp     short loc_7F2AC3
0x7F2B1C: pop     edi
0x7F2B1D: fstp    st
0x7F2B1F: pop     esi
0x7F2B20: pop     ebx
0x7F2B21: retn    4
