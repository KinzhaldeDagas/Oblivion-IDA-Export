0x7D3370: push    ebx
0x7D3371: mov     bl, [esp+4+arg_0]
0x7D3375: push    esi
0x7D3376: mov     esi, ecx
0x7D3378: cmp     byte ptr [esi+0F4h], 0
0x7D337F: jz      short loc_7D3385
0x7D3381: test    bl, bl
0x7D3383: jz      short loc_7D33A1
0x7D3385: cmp     dword ptr ds:0B42F48h, 3
0x7D338C: jl      short loc_7D33A1
0x7D338E: test    byte ptr ds:0B42F40h, 10h
0x7D3395: mov     eax, 0
0x7D339A: setnle  al
0x7D339D: test    al, al
0x7D339F: jnz     short loc_7D33F4
0x7D33A1: mov     eax, [esi+114h]
0x7D33A7: test    eax, eax
0x7D33A9: jz      short loc_7D33F4
0x7D33AB: mov     ecx, ds:0B42F50h; this
0x7D33B1: push    edi
0x7D33B2: push    eax; a2
0x7D33B3: call    BSTextureManager_DiscardShadowMap
0x7D33B8: mov     edi, [esi+114h]
0x7D33BE: test    edi, edi
0x7D33C0: jz      short loc_7D33E8
0x7D33C2: lea     eax, [edi+4]
0x7D33C5: push    eax; lpAddend
0x7D33C6: call    dword ptr ds:0A2807Ch
0x7D33CC: test    eax, eax
0x7D33CE: jnz     short loc_7D33DE
0x7D33D0: test    edi, edi
0x7D33D2: jz      short loc_7D33DE
0x7D33D4: mov     edx, [edi]
0x7D33D6: mov     eax, [edx]
0x7D33D8: push    1
0x7D33DA: mov     ecx, edi
0x7D33DC: call    eax
0x7D33DE: mov     dword ptr [esi+114h], 0
0x7D33E8: pop     edi
0x7D33E9: mov     [esi+0F4h], bl
0x7D33EF: pop     esi
0x7D33F0: pop     ebx
0x7D33F1: retn    4
0x7D33F4: mov     [esi+0F4h], bl
0x7D33FA: pop     esi
0x7D33FB: pop     ebx
0x7D33FC: retn    4
