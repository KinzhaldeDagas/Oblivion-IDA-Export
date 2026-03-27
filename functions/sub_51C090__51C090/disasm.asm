0x51C090: mov     edx, [ecx+0Ch]
0x51C093: xor     al, al
0x51C095: cmp     edx, ds:0B37D00h
0x51C09B: jnz     short loc_51C0A0
0x51C09D: retn    4
0x51C0A0: push    esi
0x51C0A1: mov     esi, [esp+4+arg_0]
0x51C0A5: xor     edx, edx
0x51C0A7: add     ecx, 44h ; 'D'
0x51C0AA: lea     ebx, [ebx+0]
0x51C0B0: test    al, al
0x51C0B2: jnz     short loc_51C0C5
0x51C0B4: cmp     [ecx], esi
0x51C0B6: jnz     short loc_51C0BA
0x51C0B8: mov     al, 1
0x51C0BA: add     edx, 1
0x51C0BD: add     ecx, 4
0x51C0C0: cmp     edx, 7
0x51C0C3: jl      short loc_51C0B0
0x51C0C5: pop     esi
0x51C0C6: retn    4
