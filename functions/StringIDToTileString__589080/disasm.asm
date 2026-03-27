0x589080: push    esi
0x589081: mov     esi, [esp+4+arg_0]
0x589085: cmp     esi, 2710h
0x58908B: jl      short loc_5890C5
0x58908D: mov     eax, 68DB8BADh
0x589092: imul    esi
0x589094: sar     edx, 0Ch
0x589097: mov     eax, edx
0x589099: shr     eax, 1Fh
0x58909C: add     eax, edx
0x58909E: mov     edx, ds:0B13BC8h
0x5890A4: imul    eax, 2710h
0x5890AA: mov     ecx, esi
0x5890AC: sub     ecx, eax
0x5890AE: mov     eax, [edx+ecx*4]
0x5890B1: test    eax, eax
0x5890B3: jz      short loc_5890C1
0x5890B5: cmp     esi, [eax]
0x5890B7: jnz     short loc_5890C1
0x5890B9: mov     eax, [eax+8]
0x5890BC: cmp     byte ptr [eax], 0
0x5890BF: jnz     short loc_5890FB
0x5890C1: xor     eax, eax
0x5890C3: pop     esi
0x5890C4: retn
0x5890C5: mov     edx, offset dword_B3B0B4
0x5890CA: push    edi
0x5890CB: jmp     short loc_5890D0
0x5890CD: align 10h
0x5890D0: mov     eax, [edx]
0x5890D2: test    eax, eax
0x5890D4: jz      short loc_5890ED
0x5890D6: lea     ecx, [eax+8]
0x5890D9: mov     ecx, [ecx]
0x5890DB: cmp     esi, [ecx]
0x5890DD: mov     eax, [eax]
0x5890DF: jnz     short loc_5890E9
0x5890E1: mov     edi, [ecx+8]
0x5890E4: cmp     byte ptr [edi], 0
0x5890E7: jnz     short loc_5890FD
0x5890E9: test    eax, eax
0x5890EB: jnz     short loc_5890D6
0x5890ED: add     edx, 10h
0x5890F0: cmp     edx, offset byte_B3B274
0x5890F6: jl      short loc_5890D0
0x5890F8: xor     eax, eax
0x5890FA: pop     edi
0x5890FB: pop     esi
0x5890FC: retn
0x5890FD: mov     eax, edi
0x5890FF: pop     edi
0x589100: pop     esi
0x589101: retn
