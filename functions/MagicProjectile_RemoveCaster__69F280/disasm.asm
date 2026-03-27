0x69F280: mov     edx, [esp+arg_0]
0x69F284: xor     eax, eax
0x69F286: cmp     edx, [ecx+68h]
0x69F289: jnz     short locret_69F2A0
0x69F28B: push    ebx
0x69F28C: mov     [ecx+68h], eax
0x69F28F: mov     eax, [ecx]
0x69F291: mov     edx, [eax+8Ch]
0x69F297: push    1
0x69F299: mov     bl, 1
0x69F29B: call    edx
0x69F29D: mov     al, bl
0x69F29F: pop     ebx
0x69F2A0: retn    4
