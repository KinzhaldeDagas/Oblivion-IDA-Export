0x5AF960: push    ecx
0x5AF961: push    0FFh
0x5AF966: call    sub_583DF0
0x5AF96B: push    3F6h
0x5AF970: call    Menu_GetOpenMenuTile
0x5AF975: add     esp, 8
0x5AF978: test    eax, eax
0x5AF97A: mov     [esp+4+var_4], eax
0x5AF97D: jz      loc_5AFA3A
0x5AF983: push    ebx
0x5AF984: mov     ecx, eax
0x5AF986: call    Tile_GetParentMenu
0x5AF98B: mov     ebx, eax
0x5AF98D: test    ebx, ebx
0x5AF98F: jz      loc_5AFA2C
0x5AF995: mov     eax, [ebx+144h]
0x5AF99B: push    0; int
0x5AF99D: push    offset ??_R0?AVTile3D@@@8; struct TypeDescriptor *
0x5AF9A2: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5AF9A7: push    0; int
0x5AF9A9: push    eax; void *
0x5AF9AA: call    OblivionDynamicCast
0x5AF9AF: add     esp, 14h
0x5AF9B2: test    eax, eax
0x5AF9B4: jz      loc_5AFA39
0x5AF9BA: cmp     dword ptr [eax+44h], 0
0x5AF9BE: jnz     short loc_5AFA2C
0x5AF9C0: cmp     dword ptr [ebx+150h], 6
0x5AF9C7: jz      short loc_5AFA2C
0x5AF9C9: push    ebp
0x5AF9CA: push    esi
0x5AF9CB: push    edi; a3
0x5AF9CC: lea     esi, [ebx+0A0h]
0x5AF9D2: mov     ebp, 5
0x5AF9D7: mov     ecx, [esi]
0x5AF9D9: test    ecx, ecx
0x5AF9DB: jz      short loc_5AF9F8
0x5AF9DD: call    sub_6B73C0
0x5AF9E2: mov     edi, [esi]
0x5AF9E4: test    edi, edi
0x5AF9E6: jz      short loc_5AF9F8
0x5AF9E8: mov     ecx, edi; this
0x5AF9EA: call    sub_6B73E0
0x5AF9EF: push    edi
0x5AF9F0: call    FormHeapFree
0x5AF9F5: add     esp, 4
0x5AF9F8: add     esi, 28h ; '('
0x5AF9FB: sub     ebp, 1
0x5AF9FE: jnz     short loc_5AF9D7
0x5AFA00: fld     dword ptr ds:0A379B4h
0x5AFA06: push    ecx
0x5AFA07: mov     ecx, [esp+18h+var_4]; this
0x5AFA0B: fstp    [esp+18h+a2]; a3
0x5AFA0E: push    1772h; a2
0x5AFA13: call    Tile_SetFloat
0x5AFA18: mov     ecx, ebx; int
0x5AFA1A: call    sub_584740
0x5AFA1F: pop     edi
0x5AFA20: pop     esi
0x5AFA21: mov     dword ptr [ebx+150h], 6
0x5AFA2B: pop     ebp
0x5AFA2C: push    0FFh
0x5AFA31: call    sub_583DF0
0x5AFA36: add     esp, 4
0x5AFA39: pop     ebx
0x5AFA3A: pop     ecx
0x5AFA3B: retn
