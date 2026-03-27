0x8ACAC0: push    esi
0x8ACAC1: mov     esi, [ecx+84h]
0x8ACAC7: xor     eax, eax
0x8ACAC9: test    esi, esi
0x8ACACB: push    edi
0x8ACACC: jle     short loc_8ACAE4
0x8ACACE: mov     edx, [ecx+80h]
0x8ACAD4: mov     edi, [esp+8+arg_0]
0x8ACAD8: cmp     [edx], edi
0x8ACADA: jz      short loc_8ACAE7
0x8ACADC: inc     eax
0x8ACADD: add     edx, 4
0x8ACAE0: cmp     eax, esi
0x8ACAE2: jl      short loc_8ACAD8
0x8ACAE4: or      eax, 0FFFFFFFFh
0x8ACAE7: mov     edx, [ecx+84h]
0x8ACAED: dec     edx
0x8ACAEE: mov     [ecx+84h], edx
0x8ACAF4: mov     ecx, [ecx+80h]
0x8ACAFA: mov     edx, [ecx+edx*4]
0x8ACAFD: pop     edi
0x8ACAFE: pop     esi
0x8ACAFF: mov     [ecx+eax*4], edx
0x8ACB02: retn    4
