0x52B4A0: xor     eax, eax
0x52B4A2: test    ecx, ecx
0x52B4A4: jz      short locret_52B4B5
0x52B4A6: cmp     dword ptr [ecx], 0
0x52B4A9: jz      short loc_52B4AE
0x52B4AB: add     eax, 1
0x52B4AE: mov     ecx, [ecx+4]
0x52B4B1: test    ecx, ecx
0x52B4B3: jnz     short loc_52B4A6
0x52B4B5: retn
