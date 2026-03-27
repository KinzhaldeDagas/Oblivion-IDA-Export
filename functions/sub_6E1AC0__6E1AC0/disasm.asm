0x6E1AC0: mov     edx, [esp+arg_0]
0x6E1AC4: push    ebx
0x6E1AC5: xor     ebx, ebx
0x6E1AC7: cmp     edx, ebx
0x6E1AC9: jz      short loc_6E1AEE
0x6E1ACB: mov     eax, [esp+4+arg_4]
0x6E1ACF: cmp     eax, ebx
0x6E1AD1: jz      short loc_6E1AEE
0x6E1AD3: mov     [ecx+0Ch], ax
0x6E1AD7: mov     eax, [esp+4+arg_8]
0x6E1ADB: mov     [ecx+28h], edx
0x6E1ADE: mov     [ecx+18h], eax
0x6E1AE1: mov     al, ds:byte_B3D3E8[eax]
0x6E1AE7: mov     [ecx+1Eh], al
0x6E1AEA: pop     ebx
0x6E1AEB: retn    0Ch
0x6E1AEE: mov     [ecx+0Ch], bx
0x6E1AF2: mov     [ecx+28h], ebx
0x6E1AF5: mov     [ecx+1Eh], bl
0x6E1AF8: mov     [ecx+18h], ebx
0x6E1AFB: pop     ebx
0x6E1AFC: retn    0Ch
