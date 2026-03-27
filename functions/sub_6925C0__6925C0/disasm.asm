0x6925C0: push    edi
0x6925C1: mov     edi, [esp+4+arg_0]
0x6925C5: mov     ecx, [edi+58h]
0x6925C8: test    ecx, ecx
0x6925CA: jz      loc_692653
0x6925D0: mov     eax, [ecx]
0x6925D2: mov     edx, [eax+3D0h]
0x6925D8: push    ebx
0x6925D9: call    edx
0x6925DB: mov     ebx, [esp+4+arg_8]
0x6925DF: cmp     eax, ebx
0x6925E1: jz      short loc_6925F1
0x6925E3: mov     ecx, [edi+58h]
0x6925E6: mov     eax, [ecx]
0x6925E8: mov     edx, [eax+3CCh]
0x6925EE: push    ebx
0x6925EF: call    edx
0x6925F1: mov     eax, [edi]
0x6925F3: mov     edx, [eax+334h]
0x6925F9: push    1
0x6925FB: mov     ecx, edi
0x6925FD: call    edx
0x6925FF: test    al, al
0x692601: jnz     short loc_692652
0x692603: push    esi
0x692604: xor     esi, esi
0x692606: cmp     ebx, ds:0B333C4h
0x69260C: jz      short loc_69261D
0x69260E: mov     ecx, [ebx+58h]
0x692611: mov     eax, [ecx]
0x692613: mov     edx, [eax+184h]
0x692619: call    edx
0x69261B: mov     esi, eax
0x69261D: mov     ecx, [edi+58h]
0x692620: mov     eax, [ecx]
0x692622: mov     edx, [eax+184h]
0x692628: call    edx
0x69262A: test    esi, esi
0x69262C: jz      short loc_692634
0x69262E: cmp     byte ptr [esi+20h], 0Ch
0x692632: jnz     short loc_692651
0x692634: test    eax, eax
0x692636: jz      short loc_692649
0x692638: cmp     byte ptr [eax+20h], 1Fh
0x69263C: jz      short loc_692651
0x69263E: mov     ecx, edi
0x692640: call    sub_5E03B0
0x692645: test    al, al
0x692647: jnz     short loc_692651
0x692649: push    ebx; int
0x69264A: mov     ecx, edi; int
0x69264C: call    sub_5F8170
0x692651: pop     esi
0x692652: pop     ebx
0x692653: pop     edi
0x692654: retn
