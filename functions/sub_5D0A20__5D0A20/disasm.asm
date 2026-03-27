0x5D0A20: sub     esp, 10h
0x5D0A23: push    ebp
0x5D0A24: push    410h
0x5D0A29: mov     ebp, ecx
0x5D0A2B: call    Menu_GetOpenMenuTile
0x5D0A30: add     esp, 4
0x5D0A33: test    eax, eax
0x5D0A35: jz      loc_5D0B6B
0x5D0A3B: push    ebx
0x5D0A3C: push    0; int
0x5D0A3E: push    offset ??_R0?AVAlchemyMenu@@@8; struct TypeDescriptor *
0x5D0A43: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D0A48: push    0; int
0x5D0A4A: mov     ecx, eax
0x5D0A4C: call    Tile_GetParentMenu
0x5D0A51: push    eax; void *
0x5D0A52: call    OblivionDynamicCast
0x5D0A57: mov     ebx, eax
0x5D0A59: add     esp, 14h
0x5D0A5C: test    ebx, ebx
0x5D0A5E: jz      loc_5D0B65
0x5D0A64: mov     eax, [ebx+0B0h]
0x5D0A6A: test    eax, eax
0x5D0A6C: jz      short loc_5D0A73
0x5D0A6E: mov     eax, [eax+8]
0x5D0A71: jmp     short loc_5D0A75
0x5D0A73: xor     eax, eax
0x5D0A75: mov     [esp+18h+var_10], eax
0x5D0A79: mov     eax, [ebx+0B4h]
0x5D0A7F: test    eax, eax
0x5D0A81: jz      short loc_5D0A88
0x5D0A83: mov     eax, [eax+8]
0x5D0A86: jmp     short loc_5D0A8A
0x5D0A88: xor     eax, eax
0x5D0A8A: mov     [esp+18h+var_C], eax
0x5D0A8E: mov     eax, [ebx+0B8h]
0x5D0A94: test    eax, eax
0x5D0A96: jz      short loc_5D0A9D
0x5D0A98: mov     eax, [eax+8]
0x5D0A9B: jmp     short loc_5D0A9F
0x5D0A9D: xor     eax, eax
0x5D0A9F: mov     [esp+18h+var_8], eax
0x5D0AA3: mov     eax, [ebx+0BCh]
0x5D0AA9: test    eax, eax
0x5D0AAB: jz      short loc_5D0AB2
0x5D0AAD: mov     eax, [eax+8]
0x5D0AB0: jmp     short loc_5D0AB4
0x5D0AB2: xor     eax, eax
0x5D0AB4: push    esi
0x5D0AB5: push    edi
0x5D0AB6: mov     edi, [esp+20h+arg_0]
0x5D0ABA: test    edi, edi
0x5D0ABC: mov     [esp+20h+var_4], eax
0x5D0AC0: mov     eax, 1
0x5D0AC5: jz      short loc_5D0B20
0x5D0AC7: mov     esi, ds:0B3B270h
0x5D0ACD: lea     ecx, [esp+20h+var_10]
0x5D0AD1: cmp     eax, 4
0x5D0AD4: jg      short loc_5D0AFF
0x5D0AD6: cmp     eax, esi
0x5D0AD8: jz      short loc_5D0AE1
0x5D0ADA: mov     edx, [ecx]
0x5D0ADC: cmp     edx, [edi+8]
0x5D0ADF: jz      short loc_5D0AE9
0x5D0AE1: add     eax, 1
0x5D0AE4: add     ecx, 4
0x5D0AE7: jmp     short loc_5D0AD1
0x5D0AE9: push    0
0x5D0AEB: push    0
0x5D0AED: mov     ecx, ebp
0x5D0AEF: mov     ds:0B3B270h, eax
0x5D0AF4: call    sub_5D0A20
0x5D0AF9: mov     ds:0B3B270h, esi
0x5D0AFF: mov     eax, [edi+8]
0x5D0B02: mov     ecx, ds:0B333C4h
0x5D0B08: add     ecx, 44h ; 'D'; this
0x5D0B0B: push    eax; a2
0x5D0B0C: call    ExtraDataList_GetContainerChanges
0x5D0B11: mov     ecx, eax; this
0x5D0B13: call    ContainerExtraData_GetItemCount
0x5D0B18: push    eax
0x5D0B19: mov     ecx, edi
0x5D0B1B: call    sub_60D020
0x5D0B20: mov     eax, ds:0B3B270h
0x5D0B25: mov     esi, [ebx+eax*4+0B0h]
0x5D0B2C: test    esi, esi
0x5D0B2E: jz      short loc_5D0B40
0x5D0B30: mov     ecx, esi
0x5D0B32: call    ContainerEntryExtraData_DestroyDataTable
0x5D0B37: push    esi
0x5D0B38: call    FormHeapFree
0x5D0B3D: add     esp, 4
0x5D0B40: mov     ecx, ds:0B3B270h
0x5D0B46: push    1Fh; int
0x5D0B48: mov     [ebx+ecx*4+0B0h], edi
0x5D0B4F: call    sub_57DE50
0x5D0B54: mov     edx, [esp+24h+arg_4]
0x5D0B58: add     esp, 4
0x5D0B5B: push    edx
0x5D0B5C: mov     ecx, ebx
0x5D0B5E: call    sub_594F00
0x5D0B63: pop     edi
0x5D0B64: pop     esi
0x5D0B65: call    sub_5D03B0
0x5D0B6A: pop     ebx
0x5D0B6B: pop     ebp
0x5D0B6C: add     esp, 10h
0x5D0B6F: retn    8
