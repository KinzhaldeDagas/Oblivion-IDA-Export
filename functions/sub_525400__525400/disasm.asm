0x525400: sub     esp, 48h
0x525403: push    esi
0x525404: mov     esi, [esp+4Ch+arg_0]
0x525408: mov     byte ptr ds:0B33D80h, 1
0x52540F: mov     ecx, [esi+58h]
0x525412: mov     eax, [ecx]
0x525414: mov     edx, [eax+318h]
0x52541A: push    esi
0x52541B: call    edx
0x52541D: mov     ecx, ds:0B333C4h
0x525423: cmp     esi, ecx
0x525425: mov     byte ptr ds:0B33D80h, 0
0x52542C: jnz     short loc_52548A
0x52542E: push    ebx
0x52542F: push    1
0x525431: call    PlayerCharacter_GetPlayerNode
0x525436: test    eax, eax
0x525438: jz      short loc_52544E
0x52543A: cmp     word ptr [eax+0B6h], 0
0x525442: jbe     short loc_52544E
0x525444: mov     eax, [eax+0B0h]
0x52544A: mov     ebx, [eax]
0x52544C: jmp     short loc_525450
0x52544E: xor     ebx, ebx
0x525450: test    ebx, ebx
0x525452: push    edi
0x525453: mov     ecx, 9
0x525458: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x52545D: lea     edi, [esp+54h+var_48]
0x525461: rep movsd
0x525463: jz      short loc_525488
0x525465: push    0
0x525467: lea     ecx, [esp+58h+var_48]
0x52546B: push    ecx
0x52546C: mov     ecx, ds:0B333C4h
0x525472: lea     edx, [esp+5Ch+var_24]
0x525476: push    edx
0x525477: call    sub_4D7C50
0x52547C: lea     edi, [ebx+30h]
0x52547F: mov     ecx, 9
0x525484: mov     esi, eax
0x525486: rep movsd
0x525488: pop     edi
0x525489: pop     ebx
0x52548A: pop     esi
0x52548B: add     esp, 48h
0x52548E: retn    4
