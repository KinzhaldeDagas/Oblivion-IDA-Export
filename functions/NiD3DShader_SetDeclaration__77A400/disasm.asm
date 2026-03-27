0x77A400: push    ebx
0x77A401: push    esi
0x77A402: mov     ebx, ecx
0x77A404: mov     esi, [ebx+24h]
0x77A407: push    edi
0x77A408: mov     edi, [esp+0Ch+arg_0]
0x77A40C: cmp     esi, edi
0x77A40E: jz      short loc_77A441
0x77A410: test    esi, esi
0x77A412: jz      short loc_77A430
0x77A414: lea     eax, [esi+4]
0x77A417: push    eax; lpAddend
0x77A418: call    dword ptr ds:0A2807Ch
0x77A41E: test    eax, eax
0x77A420: jnz     short loc_77A430
0x77A422: test    esi, esi
0x77A424: jz      short loc_77A430
0x77A426: mov     edx, [esi]
0x77A428: mov     eax, [edx]
0x77A42A: push    1
0x77A42C: mov     ecx, esi
0x77A42E: call    eax
0x77A430: test    edi, edi
0x77A432: mov     [ebx+24h], edi
0x77A435: jz      short loc_77A441
0x77A437: add     edi, 4
0x77A43A: push    edi; lpAddend
0x77A43B: call    dword ptr ds:0A28078h
0x77A441: pop     edi
0x77A442: pop     esi
0x77A443: pop     ebx
0x77A444: retn    4
