0x5E0630: push    ebx
0x5E0631: xor     bl, bl
0x5E0633: cmp     dword ptr [ecx+58h], 0
0x5E0637: jz      short loc_5E064F
0x5E0639: mov     ecx, [ecx+58h]
0x5E063C: mov     eax, [ecx]
0x5E063E: mov     edx, [eax+2C0h]
0x5E0644: call    edx
0x5E0646: test    [esp+4+arg_0], ax
0x5E064B: mov     al, 1
0x5E064D: jnz     short loc_5E0651
0x5E064F: mov     al, bl
0x5E0651: pop     ebx
0x5E0652: retn    4
