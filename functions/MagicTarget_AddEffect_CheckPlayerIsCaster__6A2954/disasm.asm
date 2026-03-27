0x6A2954: cmp     ebx, eax
0x6A2956: jnz     short MagicTarget_AddEffect___GetTargetName
0x6A2958: test    ecx, ecx
0x6A295A: jz      short MagicTarget_AddEffect___NoPlayerTarget
0x6A295C: lea     eax, [ecx+68h]
0x6A295F: jmp     short MagicTarget_AddEffect___CheckPlayerIsNotTarget
