0x99ABBC: push    esi
0x99ABBD: xor     esi, esi
0x99ABBF: jmp     short loc_99ABE4
0x99ABC1: mov     al, cl
0x99ABC3: sub     al, 61h ; 'a'
0x99ABC5: inc     edx
0x99ABC6: cmp     al, 5
0x99ABC8: ja      short loc_99ABCF
0x99ABCA: add     cl, 0D9h ; 'Ù'
0x99ABCD: jmp     short loc_99ABDA
0x99ABCF: mov     al, cl
0x99ABD1: sub     al, 41h ; 'A'
0x99ABD3: cmp     al, 5
0x99ABD5: ja      short loc_99ABDA
0x99ABD7: add     cl, 0F9h ; 'ù'
0x99ABDA: movsx   eax, cl
0x99ABDD: shl     esi, 4
0x99ABE0: lea     esi, [esi+eax-30h]
0x99ABE4: mov     cl, [edx]
0x99ABE6: test    cl, cl
0x99ABE8: jnz     short loc_99ABC1
0x99ABEA: mov     eax, esi
0x99ABEC: pop     esi
0x99ABED: retn
