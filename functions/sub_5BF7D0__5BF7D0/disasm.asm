0x5BF7D0: push    0FFFFFFFFh
0x5BF7D2: push    offset SEH_5BF7D0
0x5BF7D7: mov     eax, large fs:0
0x5BF7DD: push    eax
0x5BF7DE: sub     esp, 10h
0x5BF7E1: push    ebx; int
0x5BF7E2: push    ebp; int
0x5BF7E3: push    esi; int
0x5BF7E4: push    edi; int
0x5BF7E5: mov     eax, ds:0B30AACh
0x5BF7EA: xor     eax, esp
0x5BF7EC: push    eax; a3
0x5BF7ED: lea     eax, [esp+30h+var_C]
0x5BF7F1: mov     large fs:0, eax
0x5BF7F7: push    40Ah
0x5BF7FC: call    Menu_GetOpenMenuTile
0x5BF801: xor     ebx, ebx
0x5BF803: add     esp, 4
0x5BF806: cmp     eax, ebx
0x5BF808: jz      loc_5BFB0B
0x5BF80E: mov     ecx, eax
0x5BF810: call    Tile_GetParentMenu
0x5BF815: mov     esi, eax
0x5BF817: cmp     esi, ebx
0x5BF819: jz      loc_5BFB0B
0x5BF81F: xor     edi, edi
0x5BF821: fldz
0x5BF823: lea     ecx, [edi+edi*4+0Fh]
0x5BF827: mov     ecx, [esi+ecx*4]; this
0x5BF82A: push    ecx
0x5BF82B: lea     eax, [edi+edi*4]
0x5BF82E: fstp    [esp+34h+a2]; a3
0x5BF831: lea     ebp, [esi+eax*4]
0x5BF834: push    0FA7h; a2
0x5BF839: mov     dword ptr [ebp+34h], 0FFFFFFFFh
0x5BF840: mov     [ebp+2Ch], ebx
0x5BF843: mov     [ebp+38h], bl
0x5BF846: call    Tile_SetFloat
0x5BF84B: cmp     edi, 3; switch 4 cases
0x5BF84E: ja      short def_5BF850
0x5BF850: jmp     ds:jpt_5BF850[edi*4]; switch jump
0x5BF857: mov     [ebp+30h], ebx; jumptable 005BF850 case 0
0x5BF85A: jmp     short def_5BF850
0x5BF85C: mov     dword ptr [ebp+30h], 1; jumptable 005BF850 case 1
0x5BF863: jmp     short def_5BF850
0x5BF865: mov     dword ptr [ebp+30h], 2; jumptable 005BF850 case 2
0x5BF86C: jmp     short def_5BF850
0x5BF86E: mov     dword ptr [ebp+30h], 3; jumptable 005BF850 case 3
