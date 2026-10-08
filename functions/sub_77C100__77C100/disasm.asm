0x77C100: call    sub_77EAE0
0x77C105: test    eax, eax
0x77C107: jnz     short loc_77C10C
0x77C109: retn    4
0x77C10C: mov     ecx, eax
0x77C10E: jmp     loc_77EC20
0x77EC20: mov     eax, [ecx+0Ch]
0x77EC23: test    eax, eax
0x77EC25: mov     ecx, [esp+arg_0]
0x77EC29: mov     [ecx], eax
0x77EC2B: jz      short loc_77EC37
0x77EC2D: mov     edx, [eax]
0x77EC2F: mov     [ecx], edx
0x77EC31: mov     eax, [eax+8]
0x77EC34: retn    4
0x77EC37: xor     eax, eax
0x77EC39: retn    4
