0x4706B0: mov     eax, [ecx+4]
0x4706B3: cmp     eax, [esp+arg_0]
0x4706B7: jnz     short loc_4706C7
0x4706B9: mov     edx, [ecx]
0x4706BB: mov     eax, [edx+4]
0x4706BE: push    0
0x4706C0: call    eax
0x4706C2: mov     al, 1
0x4706C4: retn    4
0x4706C7: xor     al, al
0x4706C9: retn    4
