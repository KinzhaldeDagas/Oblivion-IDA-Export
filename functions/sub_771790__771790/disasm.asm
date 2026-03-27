0x771790: push    esi
0x771791: mov     esi, [esp+4+arg_0]
0x771795: cmp     esi, ds:0B28CB0h
0x77179B: jnb     short loc_771803
0x77179D: lea     ecx, [ecx+0]
0x7717A0: mov     ecx, ds:0B42758h
0x7717A6: mov     eax, [ecx]
0x7717A8: mov     edx, [eax+0E0h]
0x7717AE: push    0
0x7717B0: push    esi
0x7717B1: call    edx
0x7717B3: mov     ecx, ds:0B42758h
0x7717B9: mov     eax, [ecx]
0x7717BB: mov     edx, [eax+0C8h]
0x7717C1: push    0
0x7717C3: push    1
0x7717C5: push    1
0x7717C7: push    esi
0x7717C8: call    edx
0x7717CA: mov     ecx, ds:0B42758h
0x7717D0: mov     eax, [ecx]
0x7717D2: mov     edx, [eax+0C8h]
0x7717D8: push    0
0x7717DA: push    1
0x7717DC: push    4
0x7717DE: push    esi
0x7717DF: call    edx
0x7717E1: mov     ecx, ds:0B42758h
0x7717E7: mov     eax, [ecx]
0x7717E9: mov     edx, [eax+0C8h]
0x7717EF: push    0
0x7717F1: push    0
0x7717F3: push    18h
0x7717F5: push    esi
0x7717F6: call    edx
0x7717F8: add     esi, 1
0x7717FB: cmp     esi, ds:0B28CB0h
0x771801: jb      short loc_7717A0
0x771803: cmp     esi, ds:0B28CB8h
0x771809: jnb     short loc_77182E
0x77180B: jmp     short loc_771810
0x77180D: align 10h
0x771810: mov     ecx, ds:0B42758h
0x771816: mov     eax, [ecx]
0x771818: mov     edx, [eax+0E0h]
0x77181E: push    0
0x771820: push    esi
0x771821: call    edx
0x771823: add     esi, 1
0x771826: cmp     esi, ds:0B28CB8h
0x77182C: jb      short loc_771810
0x77182E: pop     esi
0x77182F: retn
