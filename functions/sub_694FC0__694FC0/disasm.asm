0x694FC0: mov     ecx, [ecx+364h]
0x694FC6: test    ecx, ecx
0x694FC8: jz      short locret_694FE7
0x694FCA: mov     eax, [ecx+8]
0x694FCD: test    eax, eax
0x694FCF: jz      short loc_694FDD
0x694FD1: add     eax, 14h
0x694FD4: jz      short loc_694FDD
0x694FD6: mov     edx, [esp+arg_0]
0x694FDA: mov     [eax+1Ch], edx
0x694FDD: mov     eax, [ecx]
0x694FDF: mov     edx, [eax+80h]
0x694FE5: call    edx
0x694FE7: retn    4
