0x70BD60: push    ebx
0x70BD61: push    esi
0x70BD62: mov     ebx, ecx
0x70BD64: mov     esi, [ebx+10h]
0x70BD67: push    edi
0x70BD68: mov     edi, [esp+0Ch+a2]
0x70BD6C: cmp     esi, edi
0x70BD6E: jz      short loc_70BDA1
0x70BD70: test    esi, esi
0x70BD72: jz      short loc_70BD90
0x70BD74: lea     eax, [esi+4]
0x70BD77: push    eax; lpAddend
0x70BD78: call    dword ptr ds:0A2807Ch
0x70BD7E: test    eax, eax
0x70BD80: jnz     short loc_70BD90
0x70BD82: test    esi, esi
0x70BD84: jz      short loc_70BD90
0x70BD86: mov     edx, [esi]
0x70BD88: mov     eax, [edx]
0x70BD8A: push    1
0x70BD8C: mov     ecx, esi
0x70BD8E: call    eax
0x70BD90: test    edi, edi
0x70BD92: mov     [ebx+10h], edi
0x70BD95: jz      short loc_70BDA1
0x70BD97: add     edi, 4
0x70BD9A: push    edi; lpAddend
0x70BD9B: call    dword ptr ds:0A28078h
0x70BDA1: pop     edi
0x70BDA2: pop     esi
0x70BDA3: pop     ebx
0x70BDA4: retn    4
