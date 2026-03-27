0x7073D0: test    byte ptr [ecx+18h], 1
0x7073D4: jnz     short locret_7073E7
0x7073D6: mov     eax, [esp+a2]
0x7073DA: mov     edx, [eax]
0x7073DC: mov     [esp+a2], ecx
0x7073E0: mov     ecx, eax
0x7073E2: mov     eax, [edx+4]
0x7073E5: jmp     eax
0x7073E7: retn    4
