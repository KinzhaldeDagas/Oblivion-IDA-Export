0x4D80C0: push    edi
0x4D80C1: mov     edi, ecx
0x4D80C3: mov     eax, [edi+8]
0x4D80C6: mov     ecx, eax
0x4D80C8: shr     ecx, 5
0x4D80CB: test    cl, 1
0x4D80CE: jnz     short loc_4D8149
0x4D80D0: shr     eax, 0Bh
0x4D80D3: test    al, 1
0x4D80D5: jnz     short loc_4D8149
0x4D80D7: cmp     [esp+4+arg_0], 0
0x4D80DC: lea     ecx, [edi+44h]
0x4D80DF: jz      short loc_4D80E8
0x4D80E1: call    sub_41E670
0x4D80E6: jmp     short loc_4D80ED
0x4D80E8: call    sub_41E650
0x4D80ED: test    eax, eax
0x4D80EF: jz      short loc_4D8149
0x4D80F1: mov     eax, [eax]
0x4D80F3: test    eax, eax
0x4D80F5: jz      short loc_4D8149
0x4D80F7: push    esi
0x4D80F8: push    0
0x4D80FA: push    eax
0x4D80FB: push    0
0x4D80FD: call    GetShadowSceneNode
0x4D8102: add     esp, 4
0x4D8105: mov     ecx, eax
0x4D8107: call    sub_7C6AE0
0x4D810C: mov     edx, [edi]
0x4D810E: mov     esi, eax
0x4D8110: mov     eax, [edx+170h]
0x4D8116: mov     ecx, edi
0x4D8118: call    eax
0x4D811A: mov     edi, eax
0x4D811C: test    edi, edi
0x4D811E: jz      short loc_4D8148
0x4D8120: push    0
0x4D8122: mov     ecx, esi
0x4D8124: call    sub_7D3370
0x4D8129: mov     byte ptr [esi+120h], 0
0x4D8130: fld     dword ptr [edi+80h]
0x4D8136: fstp    dword ptr [esi+128h]
0x4D813C: fld     dword ptr [edi+84h]
0x4D8142: fstp    dword ptr [esi+124h]
0x4D8148: pop     esi
0x4D8149: pop     edi
0x4D814A: retn    4
