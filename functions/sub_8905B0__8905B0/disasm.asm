0x8905B0: mov     eax, ds:0BA7A54h
0x8905B5: test    eax, eax
0x8905B7: jz      short locret_8905D8
0x8905B9: cmp     word ptr [eax+4], 0
0x8905BE: mov     ecx, eax
0x8905C0: jz      short locret_8905D8
0x8905C2: add     word ptr [eax+6], 0FFFFh
0x8905C7: add     eax, 6
0x8905CA: cmp     word ptr [eax], 0
0x8905CE: jnz     short locret_8905D8
0x8905D0: mov     eax, [ecx]
0x8905D2: mov     edx, [eax]
0x8905D4: push    1
0x8905D6: call    edx
0x8905D8: retn
