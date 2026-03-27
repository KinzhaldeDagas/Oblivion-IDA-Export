0x77FEA0: lea     eax, [ecx+120h]
0x77FEA6: mov     ecx, 100h
0x77FEAB: jmp     short loc_77FEB0
0x77FEAD: align 10h
0x77FEB0: mov     edx, [eax]
0x77FEB2: mov     [eax+4], edx
0x77FEB5: add     eax, 8
0x77FEB8: sub     ecx, 1
0x77FEBB: jnz     short loc_77FEB0
0x77FEBD: retn
