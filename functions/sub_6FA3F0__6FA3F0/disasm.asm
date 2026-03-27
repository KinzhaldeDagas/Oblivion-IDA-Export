0x6FA3F0: test    byte ptr ds:0B3F480h, 1
0x6FA3F7: movsx   eax, byte ptr [esp+C]
0x6FA3FC: jnz     short locret_6FA407
0x6FA3FE: mov     [esp+C], eax; C
0x6FA402: jmp     _toupper
0x6FA407: retn
