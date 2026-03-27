0x711D60: mov     eax, ecx
0x711D62: mov     ecx, [esp+arg_0]
0x711D66: test    ecx, ecx
0x711D68: mov     [eax+8], ecx
0x711D6B: jz      short locret_711D7E
0x711D6D: cmp     [ecx+0A8h], eax
0x711D73: jz      short locret_711D7E
0x711D75: mov     [esp+arg_0], eax
0x711D79: jmp     sub_435CE0
0x711D7E: retn    4
