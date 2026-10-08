0x77C120: call    sub_77EAE0
0x77C125: test    eax, eax
0x77C127: jnz     short loc_77C12C
0x77C129: retn    4
0x77C12C: mov     ecx, eax
0x77C12E: jmp     loc_77EC40
0x77EC40: mov     ecx, [esp+arg_0]
0x77EC44: mov     eax, [ecx]
0x77EC46: test    eax, eax
0x77EC48: jz      short loc_77EC54
0x77EC4A: mov     edx, [eax]
0x77EC4C: mov     [ecx], edx
0x77EC4E: mov     eax, [eax+8]
0x77EC51: retn    4
0x77EC54: xor     eax, eax
0x77EC56: retn    4
