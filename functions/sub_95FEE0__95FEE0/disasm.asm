0x95FEE0: push    edi
0x95FEE1: mov     edi, [esp+4+arg_0]
0x95FEE5: test    edi, edi
0x95FEE7: jz      short loc_95FF13
0x95FEE9: push    esi
0x95FEEA: movzx   esi, word ptr [ecx+0Eh]
0x95FEEE: xor     eax, eax
0x95FEF0: test    esi, esi
0x95FEF2: jbe     short loc_95FF05
0x95FEF4: mov     edx, [ecx+8]
0x95FEF7: cmp     edi, [edx]
0x95FEF9: jz      short loc_95FF12
0x95FEFB: add     eax, 1
0x95FEFE: add     edx, 4
0x95FF01: cmp     eax, esi
0x95FF03: jb      short loc_95FEF7
0x95FF05: lea     eax, [esp+8+arg_0]
0x95FF09: push    eax
0x95FF0A: add     ecx, 4
0x95FF0D: call    sub_4BACA0
0x95FF12: pop     esi
0x95FF13: pop     edi
0x95FF14: retn    4
