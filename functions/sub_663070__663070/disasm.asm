0x663070: push    ebx
0x663071: push    esi
0x663072: push    edi
0x663073: push    3EDh
0x663078: mov     ebx, ecx
0x66307A: call    Menu_GetOpenMenuTile
0x66307F: add     esp, 4
0x663082: xor     esi, esi
0x663084: test    eax, eax
0x663086: jz      short loc_6630A6
0x663088: push    esi; int
0x663089: push    offset ??_R0?AVHUDInfoMenu@@@8; struct TypeDescriptor *
0x66308E: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x663093: push    esi; int
0x663094: mov     ecx, eax
0x663096: call    Tile_GetParentMenu
0x66309B: push    eax; void *
0x66309C: call    OblivionDynamicCast
0x6630A1: add     esp, 14h
0x6630A4: mov     esi, eax
0x6630A6: push    3ECh
0x6630AB: call    Menu_GetOpenMenuTile
0x6630B0: add     esp, 4
0x6630B3: xor     edi, edi
0x6630B5: test    eax, eax
0x6630B7: jz      short loc_6630D7
0x6630B9: push    edi; int
0x6630BA: push    offset ??_R0?AVHUDMainMenu@@@8; struct TypeDescriptor *
0x6630BF: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x6630C4: push    edi; int
0x6630C5: mov     ecx, eax
0x6630C7: call    Tile_GetParentMenu
0x6630CC: push    eax; void *
0x6630CD: call    OblivionDynamicCast
0x6630D2: add     esp, 14h
0x6630D5: mov     edi, eax
0x6630D7: mov     al, [esp+0Ch+arg_0]
0x6630DB: test    al, al
0x6630DD: mov     [ebx+5C0h], al
0x6630E3: jz      short loc_663145
0x6630E5: test    esi, esi
0x6630E7: jz      short loc_6630FD
0x6630E9: mov     eax, [esi+24h]
0x6630EC: cmp     eax, 4
0x6630EF: jz      short loc_6630FD
0x6630F1: cmp     eax, 2
0x6630F4: jz      short loc_6630FD
0x6630F6: mov     ecx, esi; int
0x6630F8: call    sub_584740
0x6630FD: test    edi, edi
0x6630FF: jz      short loc_663115
0x663101: mov     eax, [edi+24h]
0x663104: cmp     eax, 4
0x663107: jz      short loc_663115
0x663109: cmp     eax, 2
0x66310C: jz      short loc_663115
0x66310E: mov     ecx, edi; int
0x663110: call    sub_584740
0x663115: push    0
0x663117: call    sub_578CF0
0x66311C: fld1
0x66311E: mov     ecx, ds:0B3A6B0h
0x663124: fstp    [esp+10h+var_10]; float
0x663127: push    0; int
0x663129: call    sub_5732D0
0x66312E: mov     ecx, ebx; this
0x663130: call    MobileObject_GetCharProxy
0x663135: pop     edi
0x663136: pop     esi
0x663137: mov     dword ptr [eax+3B0h], 0
0x663141: pop     ebx
0x663142: retn    4
0x663145: test    edi, edi
0x663147: jz      short loc_663166
0x663149: cmp     dword ptr [edi+24h], 4
0x66314D: jnz     short loc_663166
0x66314F: push    1
0x663151: call    GetGlobalScriptStateObj??
0x663156: add     esp, 4
0x663159: cmp     byte ptr [eax+31h], 0
0x66315D: jg      short loc_663166
0x66315F: mov     ecx, edi; int
0x663161: call    sub_584390
0x663166: push    1
0x663168: call    GetGlobalScriptStateObj??
0x66316D: add     esp, 4
0x663170: cmp     byte ptr [eax+31h], 0
0x663174: jg      short loc_663189
0x663176: call    InterfaceManager_IsMenuMode
0x66317B: test    al, al
0x66317D: jnz     short loc_663189
0x66317F: push    1
0x663181: call    sub_578CF0
0x663186: add     esp, 4
0x663189: mov     ecx, ds:0B3A6B0h
0x66318F: push    0
0x663191: push    0
0x663193: call    sub_572EC0
0x663198: mov     ecx, ebx; this
0x66319A: call    MobileObject_GetCharProxy
0x66319F: pop     edi
0x6631A0: pop     esi
0x6631A1: mov     dword ptr [eax+3B0h], 3E8h
0x6631AB: pop     ebx
0x6631AC: retn    4
