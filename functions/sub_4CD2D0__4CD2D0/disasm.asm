0x4CD2D0: push    esi
0x4CD2D1: mov     esi, ecx
0x4CD2D3: test    esi, esi
0x4CD2D5: push    edi
0x4CD2D6: mov     edi, [esp+8+arg_0]
0x4CD2DA: jz      short loc_4CD2EF
0x4CD2DC: mov     eax, [esi]
0x4CD2DE: mov     edx, [eax+58h]
0x4CD2E1: call    edx
0x4CD2E3: test    eax, eax
0x4CD2E5: jz      short loc_4CD2EF
0x4CD2E7: push    edi
0x4CD2E8: mov     ecx, eax
0x4CD2EA: call    sub_899CA0
0x4CD2EF: mov     eax, [esi+68h]
0x4CD2F2: add     esi, 60h ; '`'
0x4CD2F5: and     eax, 3FFFFFFFh
0x4CD2FA: cmp     [esi+4], eax
0x4CD2FD: jnz     short loc_4CD30A
0x4CD2FF: push    4
0x4CD301: push    esi
0x4CD302: call    sub_8A6EE0
0x4CD307: add     esp, 8
0x4CD30A: mov     ecx, [esi+4]
0x4CD30D: mov     edx, [esi]
0x4CD30F: mov     [edx+ecx*4], edi
0x4CD312: add     dword ptr [esi+4], 1
0x4CD316: pop     edi
0x4CD317: pop     esi
0x4CD318: retn    4
