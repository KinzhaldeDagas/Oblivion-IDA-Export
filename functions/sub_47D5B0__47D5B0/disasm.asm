0x47D5B0: push    ebx
0x47D5B1: push    esi
0x47D5B2: mov     esi, [esp+8+arg_0]
0x47D5B6: mov     eax, esi
0x47D5B8: lea     edx, [eax+1]
0x47D5BB: jmp     short loc_47D5C0
0x47D5BD: align 10h
0x47D5C0: mov     cl, [eax]
0x47D5C2: add     eax, 1
0x47D5C5: test    cl, cl
0x47D5C7: jnz     short loc_47D5C0
0x47D5C9: sub     eax, edx
0x47D5CB: mov     bl, cl
0x47D5CD: jz      short loc_47D5F4
0x47D5CF: mov     cl, [esi]
0x47D5D1: cmp     cl, 30h ; '0'
0x47D5D4: jl      short loc_47D5DB
0x47D5D6: cmp     cl, 39h ; '9'
0x47D5D9: jle     short loc_47D5E5
0x47D5DB: cmp     cl, 2Dh ; '-'
0x47D5DE: jz      short loc_47D5E5
0x47D5E0: cmp     cl, 2Eh ; '.'
0x47D5E3: jnz     short loc_47D5F4
0x47D5E5: cmp     eax, 1
0x47D5E8: jnz     short loc_47D5F9
0x47D5EA: cmp     cl, 2Dh ; '-'
0x47D5ED: jz      short loc_47D5F4
0x47D5EF: cmp     cl, 2Eh ; '.'
0x47D5F2: jnz     short loc_47D600
0x47D5F4: pop     esi
0x47D5F5: xor     eax, eax
0x47D5F7: pop     ebx
0x47D5F8: retn
0x47D5F9: cmp     cl, 2Eh ; '.'
0x47D5FC: jnz     short loc_47D600
0x47D5FE: mov     bl, 1
0x47D600: mov     edx, 1
0x47D605: cmp     eax, edx
0x47D607: jle     short loc_47D636
0x47D609: lea     esp, [esp+0]
0x47D610: mov     cl, [edx+esi]
0x47D613: cmp     cl, 30h ; '0'
0x47D616: jl      short loc_47D61D
0x47D618: cmp     cl, 39h ; '9'
0x47D61B: jle     short loc_47D628
0x47D61D: cmp     cl, 2Eh ; '.'
0x47D620: jnz     short loc_47D5F4
0x47D622: test    bl, bl
0x47D624: jnz     short loc_47D5F4
0x47D626: jmp     short loc_47D62D
0x47D628: cmp     cl, 2Eh ; '.'
0x47D62B: jnz     short loc_47D62F
0x47D62D: mov     bl, 1
0x47D62F: add     edx, 1
0x47D632: cmp     edx, eax
0x47D634: jl      short loc_47D610
0x47D636: pop     esi
0x47D637: mov     eax, 1
0x47D63C: pop     ebx
0x47D63D: retn
