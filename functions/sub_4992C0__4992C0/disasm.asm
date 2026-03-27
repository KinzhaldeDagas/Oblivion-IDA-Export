0x4992C0: push    ebx
0x4992C1: push    esi
0x4992C2: mov     ebx, ecx
0x4992C4: mov     esi, [ebx+104h]
0x4992CA: push    edi
0x4992CB: mov     edi, [esp+0Ch+arg_0]
0x4992CF: cmp     esi, edi
0x4992D1: jz      short loc_499307
0x4992D3: test    esi, esi
0x4992D5: jz      short loc_4992F3
0x4992D7: lea     eax, [esi+4]
0x4992DA: push    eax; lpAddend
0x4992DB: call    dword ptr ds:0A2807Ch
0x4992E1: test    eax, eax
0x4992E3: jnz     short loc_4992F3
0x4992E5: test    esi, esi
0x4992E7: jz      short loc_4992F3
0x4992E9: mov     edx, [esi]
0x4992EB: mov     eax, [edx]
0x4992ED: push    1
0x4992EF: mov     ecx, esi
0x4992F1: call    eax
0x4992F3: test    edi, edi
0x4992F5: mov     [ebx+104h], edi
0x4992FB: jz      short loc_499307
0x4992FD: add     edi, 4
0x499300: push    edi; lpAddend
0x499301: call    dword ptr ds:0A28078h
0x499307: pop     edi
0x499308: pop     esi
0x499309: pop     ebx
0x49930A: retn    4
