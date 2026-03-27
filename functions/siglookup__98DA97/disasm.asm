0x98DA97: mov     eax, [esp+arg_0]
0x98DA9B: mov     ecx, dword_B3134C
0x98DAA1: push    esi
0x98DAA2: cmp     [eax+4], edx
0x98DAA5: jz      short loc_98DAB7
0x98DAA7: mov     esi, ecx
0x98DAA9: imul    esi, 0Ch
0x98DAAC: add     esi, [esp+4+arg_0]
0x98DAB0: add     eax, 0Ch
0x98DAB3: cmp     eax, esi
0x98DAB5: jb      short loc_98DAA2
0x98DAB7: imul    ecx, 0Ch
0x98DABA: add     ecx, [esp+4+arg_0]
0x98DABE: pop     esi
0x98DABF: cmp     eax, ecx
0x98DAC1: jnb     short loc_98DAC8
0x98DAC3: cmp     [eax+4], edx
0x98DAC6: jz      short locret_98DACA
0x98DAC8: xor     eax, eax
0x98DACA: retn
