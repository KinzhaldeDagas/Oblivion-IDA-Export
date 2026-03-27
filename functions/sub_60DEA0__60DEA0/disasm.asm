0x60DEA0: mov     ecx, ds:0B3B800h
0x60DEA6: mov     eax, ds:0B3B804h
0x60DEAB: jmp     short loc_60DEB0
0x60DEAD: align 10h
0x60DEB0: test    eax, eax
0x60DEB2: jnz     short loc_60DEB8
0x60DEB4: test    ecx, ecx
0x60DEB6: jz      short locret_60DEF1
0x60DEB8: mov     eax, [ecx]
0x60DEBA: mov     edx, [eax+148h]
0x60DEC0: call    edx
0x60DEC2: mov     eax, ds:0B3B804h
0x60DEC7: test    eax, eax
0x60DEC9: jz      short loc_60DEE7
0x60DECB: mov     ecx, [eax+4]
0x60DECE: mov     ds:0B3B804h, ecx
0x60DED4: mov     edx, [eax]
0x60DED6: push    eax
0x60DED7: mov     ds:0B3B800h, edx
0x60DEDD: call    FormHeapFree
0x60DEE2: add     esp, 4
0x60DEE5: jmp     short sub_60DEA0
0x60DEE7: xor     ecx, ecx
0x60DEE9: mov     ds:0B3B800h, ecx
0x60DEEF: jmp     short loc_60DEB0
0x60DEF1: retn
