0x6A2924: mov     ecx, ds:0B333C4h
0x6A292A: test    ecx, ecx
0x6A292C: jz      short MagicTarget_AddEffect___NoPlayerCaster
0x6A292E: lea     eax, [ecx+5Ch]
0x6A2931: jmp     short MagicTarget_AddEffect___CheckPlayerIsCaster
