0x593710: push    esi
0x593711: mov     esi, ecx
0x593713: mov     ecx, [esi+0A0h]
0x593719: call    sub_580120
0x59371E: mov     ecx, [esi+2Ch]
0x593721: push    eax
0x593722: push    0FDEh
0x593727: call    Tile_SetString
0x59372C: mov     ecx, [esi+0A0h]
0x593732: call    sub_57D2F0
0x593737: test    al, al
0x593739: jnz     loc_59380E
0x59373F: cmp     [esi+0A4h], al
0x593745: jz      loc_59380E
0x59374B: mov     ecx, [esi+0A0h]
0x593751: call    NiRenderTargetGroup__GetRenderTargetsNum
0x593756: test    eax, eax
0x593758: jz      short loc_593778
0x59375A: mov     ecx, [esi+0A0h]
0x593760: call    NiRenderTargetGroup__GetRenderTargetsNum
0x593765: mov     ecx, [esi+94h]
0x59376B: push    0; a3
0x59376D: push    eax; a2
0x59376E: add     ecx, 28h ; '('; this
0x593771: call    BSStringT_Set
0x593776: pop     esi
0x593777: retn
0x593778: mov     edx, [esi+94h]
0x59377E: movzx   eax, word ptr [edx+2Ch]
0x593782: cmp     ax, 0FFFFh
0x593786: jnz     short loc_59379E
0x593788: mov     eax, [edx+28h]
0x59378B: push    edi
0x59378C: lea     edi, [eax+1]
0x59378F: nop
0x593790: mov     cl, [eax]
0x593792: add     eax, 1
0x593795: test    cl, cl
0x593797: jnz     short loc_593790
0x593799: sub     eax, edi
0x59379B: pop     edi
0x59379C: jmp     short loc_5937A1
0x59379E: movzx   eax, ax
0x5937A1: test    eax, eax
0x5937A3: jz      short loc_5937E2
0x5937A5: mov     eax, [edx+28h]
0x5937A8: test    eax, eax
0x5937AA: jnz     short loc_5937B1
0x5937AC: mov     eax, offset EmptyString
0x5937B1: mov     ecx, [esi+0A0h]
0x5937B7: push    eax
0x5937B8: call    sub_57FF20
0x5937BD: mov     eax, [esi+94h]
0x5937C3: add     eax, 24h ; '$'
0x5937C6: mov     eax, [eax+4]
0x5937C9: test    eax, eax
0x5937CB: jnz     short loc_5937D2
0x5937CD: mov     eax, offset EmptyString
0x5937D2: mov     ecx, [esi+2Ch]
0x5937D5: push    eax
0x5937D6: push    0FDEh
0x5937DB: call    Tile_SetString
0x5937E0: pop     esi
0x5937E1: retn
0x5937E2: mov     eax, ds:0B38900h
0x5937E7: mov     ecx, [esi+0A0h]
0x5937ED: push    eax
0x5937EE: call    sub_57FF20
0x5937F3: mov     ecx, ds:0B38900h
0x5937F9: push    ecx
0x5937FA: mov     ecx, [esi+2Ch]
0x5937FD: push    0FDEh
0x593802: call    Tile_SetString
0x593807: mov     byte ptr [esi+0A4h], 0
0x59380E: pop     esi
0x59380F: retn
