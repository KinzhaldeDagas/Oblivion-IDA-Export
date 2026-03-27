0x67B710: mov     ecx, [ecx]
0x67B712: xor     eax, eax
0x67B714: test    ecx, ecx
0x67B716: jz      short locret_67B727
0x67B718: cmp     dword ptr [ecx], 0
0x67B71B: jz      short loc_67B720
0x67B71D: add     eax, 1
0x67B720: mov     ecx, [ecx+4]
0x67B723: test    ecx, ecx
0x67B725: jnz     short loc_67B718
0x67B727: retn
