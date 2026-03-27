0x587550: push    esi
0x587551: push    edi
0x587552: mov     edi, [esp+8+arg_0]
0x587556: push    edi
0x587557: call    Menu_GetOpenMenuTile
0x58755C: add     esp, 4
0x58755F: test    eax, eax
0x587561: jz      short loc_58756D
0x587563: mov     edx, [eax]
0x587565: mov     ecx, eax
0x587567: mov     eax, [edx]
0x587569: push    1
0x58756B: call    eax
0x58756D: xor     esi, esi
0x58756F: cmp     edi, 3FFh
0x587575: jnz     short loc_5875B3
0x587577: call    sub_579F80
0x58757C: mov     esi, eax
0x58757E: push    0FDBh
0x587583: mov     ecx, esi
0x587585: call    Tile_GetFloat
0x58758A: push    ecx
0x58758B: mov     ecx, esi
0x58758D: fstp    [esp+0Ch+var_C]; float
0x587590: call    Tile_GetParentMenu
0x587595: push    eax; int
0x587596: call    sub_584300
0x58759B: add     esp, 8
0x58759E: mov     ecx, esi
0x5875A0: call    Tile_GetParentMenu
0x5875A5: mov     dword ptr [eax+24h], 8
0x5875AC: pop     edi
0x5875AD: mov     eax, esi
0x5875AF: pop     esi
0x5875B0: retn    4
0x5875B3: cmp     edi, 3FEh
0x5875B9: jnz     short loc_5875F7
0x5875BB: call    sub_57A180
0x5875C0: mov     esi, eax
0x5875C2: push    0FDBh
0x5875C7: mov     ecx, esi
0x5875C9: call    Tile_GetFloat
0x5875CE: push    ecx
0x5875CF: mov     ecx, esi
0x5875D1: fstp    [esp+0Ch+var_C]; float
0x5875D4: call    Tile_GetParentMenu
0x5875D9: push    eax; int
0x5875DA: call    sub_584300
0x5875DF: add     esp, 8
0x5875E2: mov     ecx, esi
0x5875E4: call    Tile_GetParentMenu
0x5875E9: mov     dword ptr [eax+24h], 8
0x5875F0: pop     edi
0x5875F1: mov     eax, esi
0x5875F3: pop     esi
0x5875F4: retn    4
0x5875F7: cmp     edi, 3EAh
0x5875FD: jnz     short loc_58763B
0x5875FF: call    sub_57A2D0
0x587604: mov     esi, eax
0x587606: push    0FDBh
0x58760B: mov     ecx, esi
0x58760D: call    Tile_GetFloat
0x587612: push    ecx
0x587613: mov     ecx, esi
0x587615: fstp    [esp+0Ch+var_C]; float
0x587618: call    Tile_GetParentMenu
0x58761D: push    eax; int
0x58761E: call    sub_584300
0x587623: add     esp, 8
0x587626: mov     ecx, esi
0x587628: call    Tile_GetParentMenu
0x58762D: mov     dword ptr [eax+24h], 8
0x587634: pop     edi
0x587635: mov     eax, esi
0x587637: pop     esi
0x587638: retn    4
0x58763B: cmp     edi, 3EBh
0x587641: jnz     short loc_58767F
0x587643: call    sub_57A440
0x587648: mov     esi, eax
0x58764A: push    0FDBh
0x58764F: mov     ecx, esi
0x587651: call    Tile_GetFloat
0x587656: push    ecx
0x587657: mov     ecx, esi
0x587659: fstp    [esp+0Ch+var_C]; float
0x58765C: call    Tile_GetParentMenu
0x587661: push    eax; int
0x587662: call    sub_584300
0x587667: add     esp, 8
0x58766A: mov     ecx, esi
0x58766C: call    Tile_GetParentMenu
0x587671: mov     dword ptr [eax+24h], 8
0x587678: pop     edi
0x587679: mov     eax, esi
0x58767B: pop     esi
0x58767C: retn    4
0x58767F: cmp     edi, 3ECh
0x587685: jnz     short loc_587693
0x587687: call    sub_5A6B00
0x58768C: pop     edi
0x58768D: mov     esi, eax
0x58768F: pop     esi
0x587690: retn    4
0x587693: cmp     edi, 3EDh
0x587699: jnz     short loc_5876A7
0x58769B: call    sub_5A4840
0x5876A0: pop     edi
0x5876A1: mov     esi, eax
0x5876A3: pop     esi
0x5876A4: retn    4
0x5876A7: cmp     edi, 3F2h
0x5876AD: jnz     short loc_5876BB
0x5876AF: call    sub_5A8E30
0x5876B4: pop     edi
0x5876B5: mov     esi, eax
0x5876B7: pop     esi
0x5876B8: retn    4
0x5876BB: cmp     edi, 3EFh
0x5876C1: jnz     short loc_5876D4
0x5876C3: push    0
0x5876C5: call    sub_5ADCF0
0x5876CA: add     esp, 4
0x5876CD: pop     edi
0x5876CE: mov     esi, eax
0x5876D0: pop     esi
0x5876D1: retn    4
0x5876D4: cmp     edi, 414h
0x5876DA: jnz     short loc_5876E8
0x5876DC: call    sub_5B6040
0x5876E1: pop     edi
0x5876E2: mov     esi, eax
0x5876E4: pop     esi
0x5876E5: retn    4
0x5876E8: cmp     edi, 3F0h
0x5876EE: jnz     short loc_587731
0x5876F0: push    0; int
0x5876F2: push    offset ??_R0?AVContainerMenu@@@8; struct TypeDescriptor *
0x5876F7: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5876FC: push    0; int
0x5876FE: push    edi
0x5876FF: call    Menu_GetOpenMenuTile
0x587704: add     esp, 4
0x587707: push    eax; void *
0x587708: call    OblivionDynamicCast
0x58770D: add     esp, 14h
0x587710: test    eax, eax
0x587712: jz      loc_5877BC
0x587718: mov     eax, [eax+44h]
0x58771B: push    0
0x58771D: push    1
0x58771F: push    0
0x587721: push    eax
0x587722: call    sub_599EE0
0x587727: add     esp, 10h
0x58772A: pop     edi
0x58772B: mov     esi, eax
0x58772D: pop     esi
0x58772E: retn    4
0x587731: cmp     edi, 402h
0x587737: jnz     short loc_5877A8
0x587739: push    0; int
0x58773B: push    offset ??_R0?AVBookMenu@@@8; struct TypeDescriptor *
0x587740: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x587745: push    0; int
0x587747: push    3F0h
0x58774C: call    Menu_GetOpenMenuTile
0x587751: add     esp, 4
0x587754: push    eax; void *
0x587755: call    OblivionDynamicCast
0x58775A: mov     edi, eax
0x58775C: add     esp, 14h
0x58775F: test    edi, edi
0x587761: jz      short loc_5877BC
0x587763: mov     esi, [edi+30h]
0x587766: mov     edx, [esi]
0x587768: mov     eax, [edx+170h]
0x58776E: push    ebx; int
0x58776F: push    0; struct TypeDescriptor *
0x587771: push    offset ??_R0?AVTESObjectBOOK@@@8; struct _s_RTTICompleteObjectLocator *
0x587776: push    offset ??_R0?AVTESBoundObject@@@8; int
0x58777B: push    0
0x58777D: mov     ecx, esi
0x58777F: call    eax
0x587781: push    eax; void *
0x587782: call    OblivionDynamicCast
0x587787: mov     edx, [edi]
0x587789: add     esp, 14h
0x58778C: mov     ebx, eax
0x58778E: mov     eax, [edx]
0x587790: push    1
0x587792: mov     ecx, edi
0x587794: call    eax
0x587796: push    esi
0x587797: push    ebx
0x587798: call    sub_5962C0
0x58779D: add     esp, 8
0x5877A0: pop     ebx
0x5877A1: pop     edi
0x5877A2: mov     esi, eax
0x5877A4: pop     esi
0x5877A5: retn    4
0x5877A8: cmp     edi, 418h
0x5877AE: jnz     short loc_5877BC
0x5877B0: push    0
0x5877B2: call    sub_5D5200
0x5877B7: add     esp, 4
0x5877BA: mov     esi, eax
0x5877BC: pop     edi
0x5877BD: mov     eax, esi
0x5877BF: pop     esi
0x5877C0: retn    4
