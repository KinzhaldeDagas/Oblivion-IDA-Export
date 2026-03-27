0x99ABEE: xor     eax, eax
0x99ABF0: mov     cl, [edx]
0x99ABF2: inc     edx
0x99ABF3: cmp     cl, 41h ; 'A'
0x99ABF6: jl      short loc_99ABFD
0x99ABF8: cmp     cl, 5Ah ; 'Z'
0x99ABFB: jle     short loc_99AC05
0x99ABFD: sub     cl, 61h ; 'a'
0x99AC00: cmp     cl, 19h
0x99AC03: ja      short locret_99AC08
0x99AC05: inc     eax
0x99AC06: jmp     short loc_99ABF0
0x99AC08: retn
