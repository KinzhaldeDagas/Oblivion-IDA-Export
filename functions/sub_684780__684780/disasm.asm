0x684780: mov     ecx, [ecx+30h]
0x684783: xor     al, al
0x684785: test    ecx, ecx
0x684787: jz      short locret_6847A1
0x684789: push    ebx
0x68478A: mov     bl, 1
0x68478C: call    sub_680CB0
0x684791: test    eax, eax
0x684793: jz      short loc_68479A
0x684795: cmp     eax, 7
0x684798: jnz     short loc_68479E
0x68479A: xor     al, al
0x68479C: pop     ebx
0x68479D: retn
0x68479E: mov     al, bl
0x6847A0: pop     ebx
0x6847A1: retn
