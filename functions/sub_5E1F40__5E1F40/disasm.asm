0x5E1F40: mov     ecx, [ecx+0F8h]
0x5E1F46: xor     eax, eax
0x5E1F48: test    ecx, ecx
0x5E1F4A: jz      short locret_5E1F54
0x5E1F4C: cmp     byte ptr [ecx+4], 35h ; '5'
0x5E1F50: jnz     short locret_5E1F54
0x5E1F52: mov     eax, ecx
0x5E1F54: retn
