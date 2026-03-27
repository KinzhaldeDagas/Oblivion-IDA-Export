0x5CF9B0: push    ecx; a3
0x5CF9B1: call    sub_578D70
0x5CF9B6: cmp     al, 1
0x5CF9B8: jnz     loc_5CFAFA
0x5CF9BE: push    ebx
0x5CF9BF: push    esi
0x5CF9C0: push    419h
0x5CF9C5: call    Menu_GetOpenMenuTile
0x5CF9CA: add     esp, 4
0x5CF9CD: mov     ecx, eax
0x5CF9CF: call    Tile_GetParentMenu
0x5CF9D4: push    0; int
0x5CF9D6: push    offset ??_R0?AVRechargeMenu@@@8; struct TypeDescriptor *
0x5CF9DB: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5CF9E0: push    0; int
0x5CF9E2: push    eax; void *
0x5CF9E3: call    OblivionDynamicCast
0x5CF9E8: mov     ecx, ds:0B3B708h
0x5CF9EE: add     esp, 14h
0x5CF9F1: push    0FB9h
0x5CF9F6: mov     ebx, eax
0x5CF9F8: call    Tile_GetFloat
0x5CF9FD: call    Double_To_SInt32
0x5CFA02: mov     ecx, ds:0B333C4h; this
0x5CFA08: push    0; a3
0x5CFA0A: push    eax; a2
0x5CFA0B: call    GetInventoryEntryOfItem
0x5CFA10: mov     esi, eax
0x5CFA12: test    esi, esi
0x5CFA14: jz      loc_5CFAED
0x5CFA1A: cmp     dword ptr [ebx+48h], 0
0x5CFA1E: jz      loc_5CFADD
0x5CFA24: push    edi
0x5CFA25: push    18h; int
0x5CFA27: call    sub_57DE50
0x5CFA2C: mov     eax, [esi+8]
0x5CFA2F: push    0; int
0x5CFA31: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5CFA36: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5CFA3B: push    0; int
0x5CFA3D: push    eax; void *
0x5CFA3E: call    OblivionDynamicCast
0x5CFA43: mov     edi, ds:0B3B70Ch
0x5CFA49: add     esp, 18h
0x5CFA4C: test    eax, eax
0x5CFA4E: mov     [esp+10h+var_4], 7FFFFFFFh
0x5CFA56: jz      short loc_5CFA60
0x5CFA58: movzx   eax, word ptr [eax+8]
0x5CFA5C: mov     [esp+10h+var_4], eax
0x5CFA60: mov     ecx, ds:0B333C4h
0x5CFA66: add     ecx, 44h ; 'D'; this
0x5CFA69: call    ExtraDataList_GetContainerChanges
0x5CFA6E: mov     ecx, ds:0B333C4h
0x5CFA74: push    0
0x5CFA76: push    edi
0x5CFA77: push    ecx
0x5CFA78: mov     ecx, eax
0x5CFA7A: call    sub_491700
0x5CFA7F: mov     edx, [esi]
0x5CFA81: mov     ecx, [edx]
0x5CFA83: call    ExtraDataList_GetExtraCount
0x5CFA88: mov     ecx, ds:0B333C4h
0x5CFA8E: add     ecx, 44h ; 'D'; this
0x5CFA91: movsx   edi, ax
0x5CFA94: call    ExtraDataList_GetContainerChanges
0x5CFA99: cmp     edi, 1
0x5CFA9C: jle     short loc_5CFAAD
0x5CFA9E: mov     eax, [esi]
0x5CFAA0: mov     ecx, [eax]
0x5CFAA2: add     edi, 0FFFFFFFFh
0x5CFAA5: push    edi
0x5CFAA6: call    ExtraDataList_SetExtraCount
0x5CFAAB: jmp     short loc_5CFAC8
0x5CFAAD: mov     ecx, [esi]
0x5CFAAF: xor     edx, edx
0x5CFAB1: test    ecx, ecx
0x5CFAB3: jz      short loc_5CFAB7
0x5CFAB5: mov     edx, [ecx]
0x5CFAB7: fild    [esp+10h+var_4]
0x5CFABB: push    edx; int
0x5CFABC: push    eax; int
0x5CFABD: push    ecx
0x5CFABE: mov     ecx, esi
0x5CFAC0: fstp    [esp+1Ch+var_1C]; float
0x5CFAC3: call    sub_488AA0
0x5CFAC8: mov     ecx, ds:0B333C4h
0x5CFACE: call    sub_65DD20
0x5CFAD3: push    0; ArgList
0x5CFAD5: mov     ecx, ebx
0x5CFAD7: call    sub_5CEF60
0x5CFADC: pop     edi
0x5CFADD: mov     ecx, esi
0x5CFADF: call    ContainerEntryExtraData_DestroyDataTable
0x5CFAE4: push    esi
0x5CFAE5: call    FormHeapFree
0x5CFAEA: add     esp, 4
0x5CFAED: push    1
0x5CFAEF: mov     ecx, ebx
0x5CFAF1: call    ??0?$NiTPointerListBase@V?$DFALL@PAVRechargeItemAndIndex@@@@PAVRechargeItemAndIndex@@@@QAE@XZ; NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>(void)
0x5CFAF6: pop     esi
0x5CFAF7: pop     ebx
0x5CFAF8: pop     ecx
0x5CFAF9: retn
0x5CFAFA: push    1; arg1
0x5CFAFC: push    0; canCreate
0x5CFAFE: call    InterfaceManager_GetSingleton
0x5CFB03: push    1; arg1
0x5CFB05: push    0; canCreate
0x5CFB07: call    InterfaceManager_GetSingleton
0x5CFB0C: add     dword ptr [eax+8Ch], 1
0x5CFB13: fild    dword ptr [eax+8Ch]
0x5CFB19: mov     ecx, [eax+8Ch]
0x5CFB1F: add     eax, 8Ch ; 'Œ'
0x5CFB24: test    ecx, ecx
0x5CFB26: jge     short loc_5CFB2E
0x5CFB28: fadd    dword ptr ds:0A2FC78h
0x5CFB2E: mov     ecx, ds:0B3B708h; this
0x5CFB34: fstp    [esp+14h+a2]; a3
0x5CFB38: add     esp, 0Ch
0x5CFB3B: push    0FF0h; a2
0x5CFB40: call    Tile_SetFloat
0x5CFB45: pop     ecx
0x5CFB46: retn
