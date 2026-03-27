0x775280: mov     eax, [ecx+138h]
0x775286: test    eax, eax
0x775288: jz      short loc_7752A3
0x77528A: mov     edx, [esp+arg_0]
0x77528E: mov     edi, edi
0x775290: lea     ecx, [eax+8]
0x775293: mov     ecx, [ecx]
0x775295: test    ecx, ecx
0x775297: mov     eax, [eax]
0x775299: jz      short loc_77529F
0x77529B: cmp     [ecx], edx
0x77529D: jz      short loc_7752A8
0x77529F: test    eax, eax
0x7752A1: jnz     short loc_775290
0x7752A3: xor     eax, eax
0x7752A5: retn    10h
0x7752A8: mov     eax, [esp+arg_C]
0x7752AC: test    eax, eax
0x7752AE: jz      short loc_77530C
0x7752B0: cmp     [esp+arg_8], 10h
0x7752B5: jbe     short loc_7752D5
0x7752B7: cmp     eax, 1
0x7752BA: mov     edx, 18h
0x7752BF: jz      short loc_775310
0x7752C1: mov     eax, 8
0x7752C6: push    eax
0x7752C7: mov     eax, [esp+4+arg_4]
0x7752CB: push    edx
0x7752CC: push    eax
0x7752CD: call    sub_7750F0
0x7752D2: retn    10h
0x7752D5: cmp     eax, 1
0x7752D8: jz      short loc_7752F3
0x7752DA: mov     eax, 8
0x7752DF: push    eax
0x7752E0: mov     eax, [esp+4+arg_4]
0x7752E4: mov     edx, 18h
0x7752E9: push    edx
0x7752EA: push    eax
0x7752EB: call    sub_7750F0
0x7752F0: retn    10h
0x7752F3: mov     eax, 1
0x7752F8: push    eax
0x7752F9: mov     eax, [esp+4+arg_4]
0x7752FD: mov     edx, 0Fh
0x775302: push    edx
0x775303: push    eax
0x775304: call    sub_7750F0
0x775309: retn    10h
0x77530C: mov     edx, [esp+arg_8]
0x775310: push    eax
0x775311: mov     eax, [esp+4+arg_4]
0x775315: push    edx
0x775316: push    eax
0x775317: call    sub_7750F0
0x77531C: retn    10h
