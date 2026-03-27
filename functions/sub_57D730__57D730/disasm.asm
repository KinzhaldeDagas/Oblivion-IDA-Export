0x57D730: push    ebx
0x57D731: xor     ebx, ebx
0x57D733: cmp     [esp+4+arg_0], bl
0x57D737: push    esi
0x57D738: mov     esi, ecx
0x57D73A: jz      short loc_57D78A
0x57D73C: cmp     [esi+9Ch], ebx
0x57D742: jz      short loc_57D78A
0x57D744: mov     ecx, [esi+98h]; this
0x57D74A: cmp     ecx, ebx
0x57D74C: jz      short loc_57D78A
0x57D74E: fldz
0x57D750: push    edi; a3
0x57D751: push    ecx
0x57D752: fstp    [esp+10h+a2]; a3
0x57D755: push    0FDDh; a2
0x57D75A: call    Tile_SetFloat
0x57D75F: mov     ecx, [esi+98h]
0x57D765: mov     eax, [esi+9Ch]
0x57D76B: mov     edi, [eax]
0x57D76D: push    ecx
0x57D76E: push    0FA8h
0x57D773: call    Tile_GetFloat
0x57D778: call    Double_To_SInt32
0x57D77D: mov     ecx, [esi+9Ch]
0x57D783: mov     edx, [edi+14h]
0x57D786: push    eax
0x57D787: call    edx
0x57D789: pop     edi
0x57D78A: mov     [esi+9Ch], ebx
0x57D790: mov     [esi+98h], ebx
0x57D796: pop     esi
0x57D797: pop     ebx
0x57D798: retn    4
