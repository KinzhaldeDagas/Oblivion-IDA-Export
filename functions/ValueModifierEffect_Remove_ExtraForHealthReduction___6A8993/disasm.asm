0x6A8993: mov     eax, [edi]
0x6A8995: mov     edx, [eax+198h]
0x6A899B: push    0
0x6A899D: mov     ecx, edi
0x6A899F: call    edx
0x6A89A1: test    al, al
0x6A89A3: jz      short ValueModifierEffect_Remove___Done_
0x6A89A5: mov     esi, [esi+38h]
0x6A89A8: cmp     esi, 8
0x6A89AB: jz      short ValueModifierEffect_Remove___CheckHealth
0x6A89AD: cmp     esi, 5
0x6A89B0: jnz     short ValueModifierEffect_Remove___Done_
