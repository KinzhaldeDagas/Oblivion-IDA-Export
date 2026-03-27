0x590420: sub     esp, 0Ch
0x590423: mov     al, ds:0B06B18h
0x590428: mov     edx, [esp+0Ch+Str]
0x59042C: push    ebx
0x59042D: push    esi
0x59042E: push    edi
0x59042F: xor     ebx, ebx
0x590431: push    ebx; int
0x590432: mov     edi, ecx
0x590434: mov     ecx, ds:0B34D88h
0x59043A: push    ebx; int
0x59043B: push    edx; Str
0x59043C: mov     ds:0B3B0A0h, bl
0x590442: mov     [esp+24h+var_9], al
0x590446: mov     [esp+24h+var_4], ecx
0x59044A: mov     byte ptr ds:0B06B18h, 1
0x590451: call    sub_58DBD0
0x590456: add     esp, 0Ch
0x590459: cmp     ds:0B3B0A0h, bl
0x59045F: mov     esi, eax
0x590461: jz      short loc_59046E
0x590463: pop     edi
0x590464: pop     esi
0x590465: xor     eax, eax
0x590467: pop     ebx
0x590468: add     esp, 0Ch
0x59046B: retn    4
0x59046E: mov     eax, [esi+0Ch]
0x590471: cmp     eax, ebx
0x590473: jnz     short loc_590477
0x590475: mov     eax, [esi]
0x590477: push    ebp; ArgList
0x590478: push    eax; int
0x590479: mov     ecx, edi; TileWindow *
0x59047B: call    sub_590330
0x590480: cmp     ds:0B3B0A0h, bl
0x590486: mov     ebp, eax
0x590488: mov     [esp+1Ch+var_8], ebp
0x59048C: jnz     loc_590546
0x590492: mov     eax, [esi+0Ch]
0x590495: cmp     eax, ebx
0x590497: jnz     short loc_59049B
0x590499: mov     eax, [esi]
0x59049B: push    eax
0x59049C: mov     ecx, ebp
0x59049E: call    sub_58CF40
0x5904A3: cmp     ds:0B3B0A0h, bl
0x5904A9: jnz     loc_590546
0x5904AF: cmp     ds:0B3B0A1h, bl
0x5904B5: jz      short loc_5904CA
0x5904B7: push    offset aATileDescripto; "A tile descriptor was not terminated..."...
0x5904BC: call    PrintError
0x5904C1: add     esp, 4
0x5904C4: mov     ds:0B3B0A1h, bl
0x5904CA: mov     ecx, ebp
0x5904CC: call    Tile_GetParentMenu
0x5904D1: mov     edi, eax
0x5904D3: cmp     edi, ebx
0x5904D5: jz      short loc_590509
0x5904D7: lea     ebp, [esi+4]
0x5904DA: cmp     ebp, ebx
0x5904DC: jz      short loc_590505
0x5904DE: mov     edi, edi
0x5904E0: mov     eax, [ebp+0]
0x5904E3: cmp     eax, ebx
0x5904E5: jz      short loc_590505
0x5904E7: push    eax
0x5904E8: mov     ecx, edi
0x5904EA: call    sub_584960
0x5904EF: mov     byte ptr [edi+1Ch], 1
0x5904F3: mov     [esi+10h], bl
0x5904F6: cmp     ds:0B3B0A0h, bl
0x5904FC: jnz     short loc_590546
0x5904FE: mov     ebp, [ebp+4]
0x590501: cmp     ebp, ebx
0x590503: jnz     short loc_5904E0
0x590505: mov     ebp, [esp+1Ch+var_8]
0x590509: mov     ecx, esi
0x59050B: call    sub_58CDB0
0x590510: push    esi
0x590511: call    FormHeapFree
0x590516: add     esp, 4
0x590519: push    ebx; float
0x59051A: mov     ecx, ebp
0x59051C: call    sub_58FBA0
0x590521: mov     ecx, [esp+1Ch+var_4]
0x590525: cmp     ds:0B34D88h, ecx
0x59052B: mov     al, [esp+1Ch+var_9]
0x59052F: mov     esi, [esp+1Ch+Str]
0x590533: mov     ds:0B06B18h, al
0x590538: jz      short loc_590560
0x59053A: cmp     esi, ebx
0x59053C: jz      short loc_590552
0x59053E: push    esi
0x59053F: push    offset aWarningsWere_0; "Warnings were encountered in Tile::Read"...
0x590544: jmp     short loc_590558
0x590546: pop     ebp
0x590547: pop     edi
0x590548: pop     esi
0x590549: xor     eax, eax
0x59054B: pop     ebx
0x59054C: add     esp, 0Ch
0x59054F: retn    4
0x590552: push    ebx; ArgList
0x590553: push    offset aWarningsWere_1; "Warnings were encountered in Tile::Read"...
0x590558: call    PrintError
0x59055D: add     esp, 8
0x590560: push    ebx; int
0x590561: push    esi; Str
0x590562: call    sub_584670
0x590567: add     esp, 8
0x59056A: mov     eax, ebp
0x59056C: pop     ebp
0x59056D: pop     edi
0x59056E: pop     esi
0x59056F: mov     ds:0B3B0A0h, bl
0x590575: pop     ebx
0x590576: add     esp, 0Ch
0x590579: retn    4
