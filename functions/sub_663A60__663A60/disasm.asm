0x663A60: mov     ecx, ds:0B333C4h
0x663A66: add     ecx, 44h ; 'D'
0x663A69: call    GetExtraDataFollower
0x663A6E: test    eax, eax
0x663A70: jz      short loc_663A91
0x663A72: mov     eax, [eax+0Ch]
0x663A75: test    eax, eax
0x663A77: jz      short loc_663A91
0x663A79: mov     edx, [esp+arg_0]
0x663A7D: lea     ecx, [ecx+0]
0x663A80: mov     ecx, [eax]
0x663A82: test    ecx, ecx
0x663A84: jz      short loc_663A91
0x663A86: cmp     ecx, edx
0x663A88: jz      short loc_663A96
0x663A8A: mov     eax, [eax+4]
0x663A8D: test    eax, eax
0x663A8F: jnz     short loc_663A80
0x663A91: xor     al, al
0x663A93: retn    4
0x663A96: mov     al, 1
0x663A98: retn    4
