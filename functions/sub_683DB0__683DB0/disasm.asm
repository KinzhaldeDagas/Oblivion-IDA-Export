0x683DB0: mov     eax, [ecx+48h]
0x683DB3: push    ebx
0x683DB4: xor     bl, bl
0x683DB6: sub     eax, 1
0x683DB9: jz      short loc_683DD5
0x683DBB: sub     eax, 1
0x683DBE: jnz     short loc_683DE8
0x683DC0: mov     ecx, [ecx+30h]
0x683DC3: test    ecx, ecx
0x683DC5: jz      short loc_683DE8
0x683DC7: call    sub_680CB0
0x683DCC: cmp     eax, 4
0x683DCF: jnz     short loc_683DE8
0x683DD1: mov     al, 1
0x683DD3: pop     ebx
0x683DD4: retn
0x683DD5: mov     ecx, [ecx+30h]
0x683DD8: test    ecx, ecx
0x683DDA: jz      short loc_683DE8
0x683DDC: call    sub_680CB0
0x683DE1: cmp     eax, 3
0x683DE4: mov     al, 1
0x683DE6: jz      short loc_683DEA
0x683DE8: mov     al, bl
0x683DEA: pop     ebx
0x683DEB: retn
