0x64F760: push    esi
0x64F761: mov     esi, ecx
0x64F763: mov     eax, [esi]
0x64F765: mov     edx, [eax+184h]
0x64F76B: call    edx
0x64F76D: cmp     dword ptr [esi+0C0h], 0
0x64F774: jz      short loc_64F782
0x64F776: mov     ecx, [esp+4+a2]
0x64F77A: mov     [esi+0CCh], ecx
0x64F780: jmp     short loc_64F789
0x64F782: mov     edx, [esp+4+a2]
0x64F786: mov     [esi+4], edx
0x64F789: test    eax, eax
0x64F78B: jz      short loc_64F7BD
0x64F78D: mov     eax, [eax+18h]
0x64F790: push    edi
0x64F791: push    eax
0x64F792: call    sub_673980
0x64F797: mov     edi, eax
0x64F799: mov     eax, [esi]
0x64F79B: mov     edx, [eax+180h]
0x64F7A1: add     esp, 4
0x64F7A4: mov     ecx, esi
0x64F7A6: call    edx
0x64F7A8: cmp     eax, edi
0x64F7AA: jl      short loc_64F7BC
0x64F7AC: mov     eax, [esi]
0x64F7AE: mov     edx, [eax+17Ch]
0x64F7B4: add     edi, 0FFFFFFFFh
0x64F7B7: push    edi
0x64F7B8: mov     ecx, esi
0x64F7BA: call    edx
0x64F7BC: pop     edi
0x64F7BD: pop     esi
0x64F7BE: retn    4
