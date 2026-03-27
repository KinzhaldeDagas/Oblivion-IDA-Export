0x405A80: cmp     ShaderPackage, 3
0x405A87: jl      short loc_405A99
0x405A89: test    byte ptr dword_B42F40, 10h
0x405A90: mov     eax, 0
0x405A95: setnle  al
0x405A98: retn
0x405A99: xor     eax, eax
0x405A9B: retn
