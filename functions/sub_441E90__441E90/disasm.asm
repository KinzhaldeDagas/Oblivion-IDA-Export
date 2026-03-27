0x441E90: push    esi
0x441E91: mov     esi, [esp+4+arg_0]
0x441E95: mov     eax, [esi]
0x441E97: mov     edx, [eax+170h]
0x441E9D: mov     ecx, esi
0x441E9F: call    edx
0x441EA1: mov     cl, [eax+4]
0x441EA4: mov     eax, [esi+8]
0x441EA7: mov     edx, eax
0x441EA9: shr     edx, 5
0x441EAC: test    dl, 1
0x441EAF: jnz     short loc_441EE0
0x441EB1: shr     eax, 0Bh
0x441EB4: test    al, 1
0x441EB6: jnz     short loc_441EE0
0x441EB8: cmp     cl, 1Ah
0x441EBB: jz      short loc_441ED7
0x441EBD: cmp     cl, 12h
0x441EC0: jz      short loc_441ED7
0x441EC2: mov     ecx, [esi+1Ch]
0x441EC5: test    ecx, ecx
0x441EC7: jz      short loc_441ED7
0x441EC9: mov     eax, [ecx]
0x441ECB: mov     edx, [eax+0F4h]
0x441ED1: call    edx
0x441ED3: test    al, al
0x441ED5: jnz     short loc_441EE0
0x441ED7: mov     eax, 1
0x441EDC: pop     esi
0x441EDD: retn    4
0x441EE0: xor     eax, eax
0x441EE2: pop     esi
0x441EE3: retn    4
