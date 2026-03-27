0x6943E0: push    edi
0x6943E1: mov     edi, ecx
0x6943E3: cmp     dword ptr [edi+38h], 0
0x6943E7: jz      short loc_694417
0x6943E9: push    esi
0x6943EA: push    0
0x6943EC: call    GetShadowSceneNode
0x6943F1: mov     esi, eax
0x6943F3: add     esp, 4
0x6943F6: test    esi, esi
0x6943F8: jz      short loc_694416
0x6943FA: mov     eax, [edi+38h]
0x6943FD: push    eax
0x6943FE: mov     ecx, esi
0x694400: call    sub_7C6230
0x694405: test    eax, eax
0x694407: jnz     short loc_694416
0x694409: mov     eax, [edi+38h]
0x69440C: push    1
0x69440E: push    eax
0x69440F: mov     ecx, esi
0x694411: call    sub_7C6AE0
0x694416: pop     esi
0x694417: pop     edi
0x694418: retn    4
