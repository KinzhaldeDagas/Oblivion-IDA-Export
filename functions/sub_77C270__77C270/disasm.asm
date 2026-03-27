0x77C270: mov     ecx, ds:0B42898h
0x77C276: test    ecx, ecx
0x77C278: jz      short locret_77C29E
0x77C27A: cmp     ds:0B40120h, ecx
0x77C280: jnz     short loc_77C28C
0x77C282: mov     dword ptr ds:0B40120h, 0
0x77C28C: mov     eax, [ecx]
0x77C28E: mov     edx, [eax]
0x77C290: push    1
0x77C292: call    edx
0x77C294: mov     dword ptr ds:0B42898h, 0
0x77C29E: retn
