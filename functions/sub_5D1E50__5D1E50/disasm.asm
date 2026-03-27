0x5D1E50: sub     esp, 8
0x5D1E53: push    40Bh
0x5D1E58: call    Menu_GetOpenMenuTile
0x5D1E5D: add     esp, 4
0x5D1E60: test    eax, eax
0x5D1E62: jz      short loc_5D1E6D
0x5D1E64: mov     ecx, eax
0x5D1E66: call    Tile_GetParentMenu
0x5D1E6B: jmp     short loc_5D1E6F
0x5D1E6D: xor     eax, eax
0x5D1E6F: push    ebx
0x5D1E70: push    0; int
0x5D1E72: push    offset ??_R0?AVRepairMenu@@@8; struct TypeDescriptor *
0x5D1E77: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D1E7C: push    0; int
0x5D1E7E: push    eax; void *
0x5D1E7F: call    OblivionDynamicCast
0x5D1E84: mov     ebx, eax
0x5D1E86: add     esp, 14h
0x5D1E89: test    ebx, ebx
0x5D1E8B: jz      loc_5D1FB8
0x5D1E91: call    sub_578D70
0x5D1E96: cmp     al, 1
0x5D1E98: jnz     loc_5D1FB4
0x5D1E9E: mov     ecx, ds:0B3B710h
0x5D1EA4: push    esi; a3
0x5D1EA5: push    0FB9h
0x5D1EAA: call    Tile_GetFloat
0x5D1EAF: call    Double_To_SInt32
0x5D1EB4: mov     ecx, ds:0B333C4h; this
0x5D1EBA: push    0; a3
0x5D1EBC: push    eax; a2
0x5D1EBD: call    GetInventoryEntryOfItem
0x5D1EC2: mov     esi, eax
0x5D1EC4: test    esi, esi
0x5D1EC6: jz      loc_5D1F93
0x5D1ECC: mov     eax, [esi+8]
0x5D1ECF: push    edi; a3
0x5D1ED0: push    eax
0x5D1ED1: call    TESHealthForm_GetHealthForForm
0x5D1ED6: mov     ecx, ds:0B333C4h
0x5D1EDC: mov     edi, ds:0B3B714h
0x5D1EE2: add     esp, 4
0x5D1EE5: add     ecx, 44h ; 'D'; this
0x5D1EE8: mov     [esp+14h+var_4], eax
0x5D1EEC: call    ExtraDataList_GetContainerChanges
0x5D1EF1: mov     ecx, ds:0B333C4h
0x5D1EF7: push    0
0x5D1EF9: push    edi
0x5D1EFA: push    ecx
0x5D1EFB: mov     ecx, eax
0x5D1EFD: call    sub_491700
0x5D1F02: mov     ecx, ds:0B333C4h
0x5D1F08: call    sub_5E4420
0x5D1F0D: mov     [esp+14h+var_8], eax
0x5D1F11: fild    [esp+14h+var_8]
0x5D1F15: push    ecx
0x5D1F16: mov     ecx, [ebx+34h]; this
0x5D1F19: fstp    [esp+18h+a2]; a3
0x5D1F1C: push    0FAEh; a2
0x5D1F21: call    Tile_SetFloat
0x5D1F26: mov     ecx, ds:0B333C4h
0x5D1F2C: add     ecx, 44h ; 'D'; this
0x5D1F2F: call    ExtraDataList_GetContainerChanges
0x5D1F34: mov     edx, [esi]
0x5D1F36: mov     ecx, [edx]
0x5D1F38: mov     edi, eax
0x5D1F3A: call    ExtraDataList_GetExtraCount
0x5D1F3F: movsx   eax, ax
0x5D1F42: cmp     eax, 1
0x5D1F45: jle     short loc_5D1F56
0x5D1F47: add     eax, 0FFFFFFFFh
0x5D1F4A: push    eax
0x5D1F4B: mov     eax, [esi]
0x5D1F4D: mov     ecx, [eax]
0x5D1F4F: call    ExtraDataList_SetExtraCount
0x5D1F54: jmp     short loc_5D1F73
0x5D1F56: mov     ecx, [esi]
0x5D1F58: xor     eax, eax
0x5D1F5A: test    ecx, ecx
0x5D1F5C: jz      short loc_5D1F60
0x5D1F5E: mov     eax, [ecx]
0x5D1F60: fild    [esp+14h+var_4]
0x5D1F64: push    1; int
0x5D1F66: push    eax; int
0x5D1F67: push    edi; int
0x5D1F68: push    ecx
0x5D1F69: mov     ecx, esi
0x5D1F6B: fstp    [esp+24h+var_24]; float
0x5D1F6E: call    sub_488830
0x5D1F73: mov     ecx, esi
0x5D1F75: call    ContainerEntryExtraData_DestroyDataTable
0x5D1F7A: push    esi
0x5D1F7B: call    FormHeapFree
0x5D1F80: fld1
0x5D1F82: mov     ecx, [ebx+3Ch]; this
0x5D1F85: fstp    [esp+18h+a2]; a3
0x5D1F88: push    0FA1h; a2
0x5D1F8D: call    Tile_SetFloat
0x5D1F92: pop     edi
0x5D1F93: mov     ecx, ds:0B333C4h
0x5D1F99: mov     edx, [ecx]
0x5D1F9B: mov     eax, [edx+2C0h]
0x5D1FA1: call    eax
0x5D1FA3: mov     ecx, ebx
0x5D1FA5: call    sub_5D0B80
0x5D1FAA: push    1
0x5D1FAC: mov     ecx, ebx
0x5D1FAE: call    sub_5D1080
0x5D1FB3: pop     esi
0x5D1FB4: mov     byte ptr [ebx+64h], 0
0x5D1FB8: pop     ebx
0x5D1FB9: add     esp, 8
0x5D1FBC: retn
